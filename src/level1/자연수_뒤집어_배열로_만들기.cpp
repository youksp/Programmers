#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    for(; n > 0;){
        answer.emplace_back(n%10);
        n /= 10;
    }

    return answer;
}

int main(){
    return 0;
}