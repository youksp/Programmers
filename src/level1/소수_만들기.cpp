#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int tempNum = 0;
    bool isPrime = true;;
    vector<int> primeNum;
    for(int ii = 0; ii < nums.size(); ++ii){
        for(int jj = ii+1; jj < nums.size(); ++jj){
            for(int kk = jj+1; kk < nums.size(); ++kk){
                tempNum = nums[ii] + nums[jj] +nums[kk];
                isPrime = true;
                for(int div = 2; div < tempNum; ++div){
                    if(tempNum % div == 0){
                        isPrime = false;
                        break;
                    }
                }
                if(isPrime){
                    ++answer;
                }
            }
        }
    }


    return answer;
}

int main(){
    return 0;
}