#include <string>
#include <vector>
#include <map>
#include <math.h>

using namespace std;

struct state {

    void appendScore(string _str, int _choices){
        if(_choices >= 1 && _choices <= 3){
            score[_str[0]] += abs(_choices - 4);
        }else if(_choices >= 5 && _choices <= 7){
            score[_str[1]] += abs(_choices - 4);
        }
    }

    char getScore(){
        char cRtn;
        if(score.begin()->second >= score.rbegin()->second){
            cRtn = score.begin()->first;
        } else {
            cRtn = score.rbegin()->first;
        }
        return cRtn;
    }

    bool hasKey(string _str){
        return score.begin()->first == _str[0] || score.rbegin()->first == _str[0];
    }

    map<char, int> score;
};


string solution(vector<string> survey, vector<int> choices) {
    string answer = "";

    state status[4];
    status[0].score.insert(pair<char, int>('R', 0));
    status[0].score.insert(pair<char, int>('T', 0));
    status[1].score.insert(pair<char, int>('C', 0));
    status[1].score.insert(pair<char, int>('F', 0));
    status[2].score.insert(pair<char, int>('J', 0));
    status[2].score.insert(pair<char, int>('M', 0));
    status[3].score.insert(pair<char, int>('A', 0));
    status[3].score.insert(pair<char, int>('N', 0));
    
    for(int ii = 0; ii < survey.size(); ++ii){
        for(int jj = 0; jj < 4; ++jj){
            if(status[jj].hasKey(survey[ii])){
                status[jj].appendScore(survey[ii], choices[ii]);
            }
        }
    }

    for(int ii = 0; ii < 4; ++ii){
        answer += status[ii].getScore();
    }

    return answer;
}

int main(){
    return 0;
}