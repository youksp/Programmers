#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> primeNums;
    primeNums.emplace_back(2);
    bool isPrime = false;
    for(int ii = 3; ii <= n; ++ii){
        isPrime = true;
        for(int jj = 0; jj < primeNums.size() && jj < sqrt(ii); ++jj){
            if(ii % primeNums[jj] == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primeNums.emplace_back(ii);
        }
    }

    answer = primeNums.size();
    return answer;
}

int main(){
    return 0;
}