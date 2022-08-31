#include <string>
#include <vector>
#include <math.h>

using namespace std;

void Dec2TerVec(int _dec, vector<int> &_ter){
    for(;_dec > 0;){
        _ter.emplace_back(_dec % 3);
        _dec /= 3;
    }
}

int TerVec2Dec(vector<int> &_ter){
    int dec = 0;
    for(int ii = 0; ii < _ter.size(); ++ii){
        dec += _ter[ii] * pow(3, ii);
    }
    return dec;
}

int solution(int n) {
    int answer = 0;
    vector<int> forward;
    vector<int> backward;

    Dec2TerVec(n, forward);

    for(int ii = forward.size() -1; ii >= 0; --ii){
        backward.emplace_back(forward[ii]);
    }

    answer = TerVec2Dec(backward);

    return answer;
}

int main(){
    return 0;
}