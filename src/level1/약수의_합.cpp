#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;


    for(int ii = 1; ii <= n; ++ii){
        if(n % ii == 0){
            answer += ii;
        }
    }

    return answer;
}

int main(){
    return 0;
}