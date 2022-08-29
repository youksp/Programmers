#include <iostream>
#include <vector>

using namespace std;
int solution(int n)
{
    int answer = 0;
    vector<int> tempNum;

    for(; n > 0;){
        tempNum.emplace_back(n%10);
        n /= 10;
    }

    for(int ii = 0; ii < tempNum.size(); ++ii){
        answer += tempNum[ii];
    }

    return answer;
}

int main(){
    return 0;
}