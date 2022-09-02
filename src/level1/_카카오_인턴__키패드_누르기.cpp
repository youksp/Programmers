#include <string>
#include <vector>
#include <math.h>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    char curRight = '#';
    char curLeft = '*';

    int PositionNum[2] = {-1,-1};
    int PositionRight[2] = {-1,-1};
    int PositionLeft[2] = {-1,-1};

    vector<vector<char>> keypadMap;
    keypadMap.emplace_back(vector<char>{'1','4','7','*'});
    keypadMap.emplace_back(vector<char>{'2','5','8','0'});
    keypadMap.emplace_back(vector<char>{'3','6','9','#'});

    for(int ii = 0; ii < numbers.size(); ++ii){
        for(int jj = 0; jj < 4; ++jj){
            if((numbers[ii] + '0') == keypadMap[0][jj]){
                answer += "L";
                curLeft = keypadMap[0][jj];
                break;
            } else if ((numbers[ii] + '0') == keypadMap[2][jj]){
                answer += "R";
                curRight = keypadMap[2][jj];
                break;
            } else if ((numbers[ii] + '0') == keypadMap[1][jj]) {
                PositionNum[0] = 1;
                PositionNum[1] = jj;
                for(int r = 0; r < 3; ++r){
                    for(int c = 0; c < 4; ++c){
                        if(curRight == keypadMap[r][c]){
                                PositionRight[0] = r;
                                PositionRight[1] = c;
                        }
                        if(curLeft == keypadMap[r][c]){
                                PositionLeft[0] = r;
                                PositionLeft[1] = c;
                        }
                    }
                }
                int diffL = abs(PositionNum[0] - PositionLeft[0]) + abs(PositionNum[1] - PositionLeft[1]);
                int diffR = abs(PositionNum[0] - PositionRight[0]) + abs(PositionNum[1] - PositionRight[1]);

                if(diffL > diffR || (diffL == diffR && "right" == hand)){
                    answer += "R";
                    curRight = keypadMap[PositionNum[0]][PositionNum[1]];
                } else if(diffL < diffR|| (diffL == diffR && "left" == hand)){
                    answer += "L";
                    curLeft = keypadMap[PositionNum[0]][PositionNum[1]];
                }
                break;
            }
        }
    }    
    
    return answer;
}

int main(){
    return 0;
}