#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct step {
    step() {num = 0; curUser = 0; challengeUser = 0;}
    int num;
    int curUser;
    int challengeUser;
};

bool compare(step &_val1, step &_val2){
    double fail1 = 0.0;
    double fail2 = 0.0;

    if(_val1.challengeUser != 0){
        fail1 = (double)_val1.curUser / (double)_val1.challengeUser;
    }
    if(_val2.challengeUser != 0){
        fail2 = (double)_val2.curUser / (double)_val2.challengeUser;
    }

    if(abs(fail1 - fail2) < 0.00000000001){
        return _val1.num < _val2.num;
    }

    return fail1 > fail2;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<step> curStep(N, step());
    int playerNum = stages.size();
    for(int ii = 1; ii <= N; ++ii){
        curStep[ii - 1].num = ii;
    }
    
    for(int ii = 0; ii < stages.size(); ++ii){
        if(stages[ii] <= N){   
            curStep[stages[ii] - 1].curUser += 1;
        }
        for(int jj = 0; jj < stages[ii]; ++jj){
            if(jj != N){
            curStep[jj].challengeUser += 1;
            }
        }
    }

    sort(curStep.begin(), curStep.end(), compare);

    for(int ii = 0 ; ii < N; ++ii){
        answer.emplace_back(curStep[ii].num);
    }

    return answer;
}

int main(){
    return 0;
}