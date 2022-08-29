#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int smallNum = INT32_MAX;
    int loop = 0;
    for(int ii = 0; ii < arr.size(); ++ii){
        if(arr[ii] < smallNum){
            smallNum = arr[ii];
            loop = ii;
        }
    }
    arr.erase(arr.begin() + loop);

    answer = arr;

    if(answer.empty()){
        answer.emplace_back(-1);
    }

    return answer;
}

int main(){
    return 0;
}