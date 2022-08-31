#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for(int ii = 0; ii < absolutes.size(); ++ii){
        answer += signs[ii] ? absolutes[ii] : absolutes[ii] * -1;
    }

    return answer;
}

int main(){
    return 0;
}