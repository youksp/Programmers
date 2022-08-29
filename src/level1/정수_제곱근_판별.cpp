#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    long long sqrtNum = sqrt(n);

    if(sqrtNum * sqrtNum == n){
        answer = (sqrtNum + 1) * (sqrtNum + 1);
    }
    else {
        answer = -1;
    }

    return answer;
}

int main(){
    return 0;
}