#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int x = 1; x < n; ++x){
        if(1 == n % x){
            answer = x; 
            break;
        }
    }
    return answer;
}

int main(){
    return 0;
}