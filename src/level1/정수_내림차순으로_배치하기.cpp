#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> tempNum;
    for(; n>0;){
        tempNum.emplace_back(n%10);
        n /= 10;
    }
    sort(tempNum.begin(), tempNum.end());

    for(int ii = 0; ii < tempNum.size(); ++ii){
        answer += tempNum[ii] * pow(10, ii);
    }
    
    return answer;
}

int main(){
    return 0;
}
