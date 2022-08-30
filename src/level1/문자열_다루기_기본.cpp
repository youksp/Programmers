#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if(s.size() != 4 && s.size() != 6){
        answer = false;
    }

    for(int ii = 0; ii <s.size(); ++ii){
        if(!isdigit(s[ii])){
            answer = false;
            break;
        }
    }

    return answer;
}

int main(){
    return 0;
}