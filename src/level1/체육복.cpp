#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for(int ii = 0; ii < lost.size(); ++ii){
        for(int jj = 0; jj < reserve.size(); ++jj){
            if(lost[ii] == reserve[jj]){
                lost.erase(lost.begin() + ii);
                reserve.erase(reserve.begin() + jj);
                --ii;
            }
            else if(lost[ii] < reserve[jj]){
                break;
            }
        }
    }

    for(int ii = 0; ii < lost.size(); ++ii){
        for(int jj = 0; jj < reserve.size(); ++jj){
            if(lost[ii] - 1 == reserve[jj]){
                lost.erase(lost.begin() + ii);
                reserve.erase(reserve.begin() + jj);
                --ii;
                break;
            }else if(lost[ii] + 1 == reserve[jj]){
                lost.erase(lost.begin() + ii);
                reserve.erase(reserve.begin() + jj);
                --ii;
                break;
            }
        }
    }
    answer = n - lost.size();

    return answer;
}

int main(){
    return 0;
}