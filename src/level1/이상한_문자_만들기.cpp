#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    for(int ii = 0; ii < s.size(); ++ii){
        
        if(s[ii] == ' '){
            cnt  = -1;
        } else if (cnt % 2 == 0){
            s[ii] = toupper(s[ii]);
        } else {
            s[ii] = tolower(s[ii]);
        }
        ++cnt;
    }   
    answer = s;
    return answer;
}

int main(){
    return 0;
}