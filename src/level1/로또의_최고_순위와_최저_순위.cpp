#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correct = 0;
    int blackBoxs = 0;

    for(int ii = 0; ii < lottos.size(); ++ii){
        if(0 == lottos[ii]){
            ++blackBoxs;
        } else {
            for(int jj = 0; jj < win_nums.size(); ++jj){
                if(lottos[ii] == win_nums[jj]){
                    ++correct;
                }
            }
        }
    }
    answer.emplace_back(correct + blackBoxs);
    answer.emplace_back(correct);

    for(int ii = 0; ii < answer.size(); ++ii){
        if(answer[ii] == 6){
            answer[ii] = 1;
        } else if(answer[ii] == 5){
            answer[ii] = 2;
        }else if(answer[ii] == 4){
            answer[ii] = 3;
        }else if(answer[ii] == 3){
            answer[ii] = 4;
        }else if(answer[ii] == 2){
            answer[ii] = 5;
        }else{
            answer[ii] = 6;
        }
    }

    return answer;
}

int main(){
    return 0;
}