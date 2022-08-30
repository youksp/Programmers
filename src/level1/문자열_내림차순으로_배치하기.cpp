#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(char a, char b){
    return b < a;
}

string solution(string s) {
    string answer = "";
    
    sort(s.begin(), s.end(), compare);

    answer = s;
    return answer;
}

int main(){
    return 0;
}