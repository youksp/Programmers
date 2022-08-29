#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> row;
    for(int ii = 0; ii < arr1.size(); ++ii){
        row.clear();
        for(int jj = 0; jj < arr1[ii].size(); ++jj){
            row.emplace_back(arr1[ii][jj] + arr2[ii][jj]);
        }
        answer.emplace_back(row);
    }
    
    return answer;
}

int main(){
    return 0;
}