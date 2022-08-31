#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> unique;
    for(int ii = 0; ii < numbers.size(); ++ii){
        for(int jj = ii+1; jj < numbers.size(); ++jj){
            unique.insert(numbers[ii] + numbers[jj]);
        }
    }
    for(auto num : unique){
        answer.emplace_back(num);
    }
    sort(answer.begin(), answer.end());

    return answer;
}

int main(){
    return 0;
}