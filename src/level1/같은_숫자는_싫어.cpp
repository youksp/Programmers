#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    for(int ii = 0; ii < arr.size(); ++ii){
        if(answer.empty()){
            answer.emplace_back(arr[ii]);
        } else {
            if(answer.back() != arr[ii]){
                answer.emplace_back(arr[ii]);
            }
        }
    }

    return answer;
}

int main(){
    return 0;
}