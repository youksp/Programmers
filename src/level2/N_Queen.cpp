#include <string>
#include <vector>
#include <math.h>

using namespace std;

int N;

typedef struct postion {
    postion(int _r, int _c) : r(_r), c(_c){}
    int r;
    int c;
} Pos;


void OnPutQueen(int r, int c, vector<Pos> &_qLocation, int &cnt){
    for(int ii = 0; ii < _qLocation.size(); ++ii){
        if(abs(_qLocation[ii].r - r) == abs(_qLocation[ii].c - c) || (c == _qLocation[ii].c)){
            return;
        }
    }
    _qLocation.emplace_back(Pos(r, c));

    if(r != N-1){
        for(int ii = 0; ii < N; ++ii){
            OnPutQueen(r+1, ii, _qLocation, cnt);
        }
    } else{
        ++cnt;
    }

    _qLocation.pop_back();
    return;
}

int solution(int n) {
    int answer = 0;
    vector<Pos> qLocation;
    N = n;

    for(int c = 0; c < N; ++c){
        OnPutQueen(0, c, qLocation, answer);
    }

    return answer;
}

int main(){
    return 0;
}