#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 1;

    for(; answer < 500; ++answer){
        if(num % 2 == 0){
            num /= 2;
        } else {
            num = (num * 3) + 1;
        }
        if(1 == num){
            break;
        }
    }
    answer = answer == 500 ? -1 : answer;
    return answer;
}

int main(){
    solution(626331);
    return 0;
}