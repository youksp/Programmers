#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    
    sort(d.begin(), d.end());
    for(int ii = 0; ii < d.size(); ++ii){
        budget -= d[ii];
        if(budget < 0){
            answer = ii;
            break;
        }
    }
    if(budget >= 0){
        answer = d.size();
    }

    return answer;
}

int main(){
    return 0;
}