#include <string>
#include <vector>

using namespace std;

int getDivisorCnt(int _num){
    int cnt = 0;

    for(int ii = 1; ii <= _num; ++ii){
        if(_num % ii == 0){
            ++cnt;
        }
    }
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;

    for(int ii = left; ii <= right; ++ii){
        if(getDivisorCnt(ii) % 2 == 0){
            answer += ii;
        }else{
            answer -= ii;
        }
    }

    return answer;
}

int main(){
    return 0;
}