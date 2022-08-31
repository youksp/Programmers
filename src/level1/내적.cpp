#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;

    for(int ii = 0; ii < a.size(); ++ii){
        answer += (a[ii] * b[ii]);
    }

    return answer;
}

int main(){
    return 0;
}