#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int addNum = 0;
    for(int temp = x; temp > 0;){
        addNum += temp % 10;
        temp /= 10;
    }
    
    answer = x % addNum == 0 ? true : false;
    return answer;
}

int main(){
    return 0;
}