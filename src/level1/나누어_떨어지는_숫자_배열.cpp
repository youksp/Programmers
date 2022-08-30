#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for(int ii = 0; ii < arr.size(); ++ii){
        if(arr[ii] % divisor == 0){
            answer.emplace_back(arr[ii]);
        }
    }

    sort(answer.begin(), answer.end());

    if(answer.empty()){
        answer.emplace_back(-1);
    }
    return answer;
}

int main(){
    return 0;
}