#include<bits/stdc++.h>
using namespace std;
//두자리수 이상 
string solution(string s) {
    string answer = "";
    string token = "";
    vector<int> num;
    bool plus = true;
    
    for(stringstream sts(s); (sts >> token);){
        num.push_back(stoi(token));
    }
    
    sort(num.begin(), num.end());
    string str = to_string(num.front());
    answer += str;
    answer += ' ';
    str = to_string(num.back());
    answer += str;
    
    
    return answer;
}

int main(){
    return 0;
}