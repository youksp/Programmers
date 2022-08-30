/** 
VS Code 사용시 gdb가 한글을 인식하지 못하여 path 에러가 난다
그때를 위해 만든 cpp
여기에 코드 복사해서 디버깅 테스트 진행
*/

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
    solution("1D2S#10S");
    return 0;
}