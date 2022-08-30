#include <string>
#include <math.h>

using namespace std;

typedef struct dartSet {
    dartSet() {num = 0; bouns = 0, option = 0; score = 0;}

    int num;
    int bouns;
    char option;
    int score;
};

int solution(string dartResult) {
    int answer = 0;
    
    dartSet setTimes[3];
    int cnt = 0;
    for(int ii = 0; ii < dartResult.size(); ++ii){
        if(isdigit(dartResult[ii])){
            if(setTimes[cnt].num == 0){
                setTimes[cnt].num = dartResult[ii] - '0';
            }else{
                setTimes[cnt].num *= 10;
            }
        } else if(dartResult[ii] == 'S' || dartResult[ii] == 'D' || dartResult[ii] == 'T'){
            if(dartResult[ii] == 'S'){
                setTimes[cnt].bouns = 1;
            }else if(dartResult[ii] == 'D'){
                setTimes[cnt].bouns = 2;
            }else {
                setTimes[cnt].bouns = 3;
            }
            ++cnt;
        } else if(dartResult[ii] == '*' || dartResult[ii] == '#'){
                setTimes[cnt-1].option = dartResult[ii];
        } 
    }

    for(int ii = 0; ii < 3; ++ii){
        setTimes[ii].score = pow(setTimes[ii].num, setTimes[ii].bouns);
        if(setTimes[ii].option == '*'){
            setTimes[ii].score *= 2;
            if(ii != 0){
                setTimes[ii - 1].score *= 2;
            } 
        }else if(setTimes[ii].option == '#'){
            setTimes[ii].score *= -1;
        }
    }

    answer = setTimes[0].score + setTimes[1].score + setTimes[2].score;
    return answer;
}

int main(){
    return 0;
}