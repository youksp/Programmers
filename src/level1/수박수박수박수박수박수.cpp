#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    for(int ii = 0; ii < n; ++ii){
        if(ii % 2 == 0){
            answer.append("수");
        }else{
            answer.append("박");
        }
    }

    return answer;
}

int main(){
    return 0;
}