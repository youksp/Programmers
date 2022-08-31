#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
    student() : num(0), correct(0) {}
    vector<int> guessPatten;
    int num;
    int correct;
};

bool compare(student &_val1, student & _val2){
    if(_val1.correct == _val2.correct){
        return _val1.num < _val2.num;
    }
    return _val1.correct > _val2.correct;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<student> mathThrower(3);
    mathThrower[0].guessPatten = vector<int>({1, 2, 3, 4, 5});
    mathThrower[1].guessPatten = vector<int>({2, 1, 2, 3, 2, 4, 2, 5});
    mathThrower[2].guessPatten = vector<int>({3, 3, 1, 1, 2, 2, 4, 4, 5, 5});

    for(int ii = 0; ii < 3; ++ii){
        mathThrower[ii].num = ii + 1;
    }

    for(int ii = 0; ii < answers.size(); ++ii){
        for(int jj = 0; jj < 3; ++jj){
            if(answers[ii] == mathThrower[jj].guessPatten[ii % mathThrower[jj].guessPatten.size()]){
                mathThrower[jj].correct +=1;
            }
        }
    }

    sort(mathThrower.begin(), mathThrower.end(), compare);

    answer.emplace_back(mathThrower[0].num);
    for(int ii = 1; ii < mathThrower.size(); ++ii){
        if(mathThrower[0].correct == mathThrower[ii].correct){
            answer.emplace_back(mathThrower[ii].num);
        }
    }

    return answer;
}

int main(){
    return 0;
}