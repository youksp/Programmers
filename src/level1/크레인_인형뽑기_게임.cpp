#include <string>
#include <vector>
#include <deque>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int ans = 0;
    deque<int> barket;
    
    int max = board.size();
    for(int i = 0; i < moves.size(); i++){
        for(int j=0; j<max; j++){
            if(board[j][moves[i]-1] != 0){
                barket.push_back(board[j][moves[i]-1]);
                cout << barket.back() <<endl;
                board[j][moves[i]-1] = 0;

                if(barket.size() > 1){
                    auto iter = barket.end();
                    if(*(iter-1) == *(iter-2)){
                        barket.pop_back();
                        barket.pop_back();
                        ans+=2;
                    }
                }
                break;
            }
            
        }
    }
    
    return ans;
}

int main(){
    return 0;
}