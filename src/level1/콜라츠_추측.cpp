#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long lNum = num;
    for(; answer < 500; ++answer){
        if(1 == lNum){
            break;
        }
        if(lNum % 2 == 0){
            lNum /= 2;
        } else {
            lNum = (lNum * 3) + 1;
        }
    }
    answer = answer == 500 ? -1 : answer;
    return answer;
}

int main(){
    return 0;
}