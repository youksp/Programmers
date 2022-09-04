#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<vector<int>> arr2T(arr2[0].size(), vector<int>(arr2.size(), 0));
    for(int r = 0; r < arr2.size(); r++){
        for(int c = 0; c < arr2[0].size(); c++){
            arr2T[c][r] = arr2[r][c];

        }
    }
    int arow = arr1.size(), acol = arr2T.size();
    answer.assign(arow, vector<int>(acol, 0));
    
    for(int r = 0; r < arow; r++){
        for(int c =0; c< acol; c++){
            int buf(0);
            for(int i =0; i <arr2.size(); i++){
                buf += arr1[r][i] * arr2T[c][i];
            }
            answer[r][c]  = buf;
        }
    }
    

    return answer;
}

int main(){
    return 0;
}