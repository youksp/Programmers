#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";


    for(int idx = s.size() - 1; idx >= 0; --idx){
        if(0 == idx || s[idx -1] == ' '){
            if(s[idx] >= 'a' && s[idx] <= 'z'){
                s[idx] = s[idx] - 'a' + 'A';
            }
        } else {
            if(s[idx] >= 'A' && s[idx] <= 'Z'){
                s[idx] = s[idx] - 'A' + 'a';
            }
        }
    }
    answer = s;
    return answer;
}

int main(){
    return 0;
}