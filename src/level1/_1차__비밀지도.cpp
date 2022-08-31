#include <string>
#include <vector>

using namespace std;

void DecToBinMap(int _n, vector<int> &_mapRow){
    for(int ii = _mapRow.size() - 1; ii >= 0; --ii){
        _mapRow[ii] += _n % 2;
        _n /= 2;
    }
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<vector<int>> map(n, vector<int>(n, 0));
    
    for(int ii = 0; ii < n; ++ii){
        DecToBinMap(arr1[ii], map[ii]);
        DecToBinMap(arr2[ii], map[ii]);
    }    
    for(int row = 0; row < n; ++row){
        answer.push_back(string());
        for(int col = 0; col < n; ++col){
            if(0 == map[row][col]){
                answer[row].push_back(' ');
            }else{
                answer[row].push_back('#');
            }
        }
    }

    return answer;
}

int main(){
    return 0;
}