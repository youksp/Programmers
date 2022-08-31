#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> adjustArray;
    for(int ii = 0; ii < commands.size(); ++ii){
        adjustArray.clear();
        adjustArray = array;

        adjustArray.erase(adjustArray.begin() + commands[ii][1], adjustArray.end());
        adjustArray.erase(adjustArray.begin(), adjustArray.begin() + commands[ii][0] - 1);

        sort(adjustArray.begin(), adjustArray.end());

        answer.emplace_back(adjustArray[commands[ii][2] - 1]);
    }

    return answer;
}

int main(){
    return 0;
}