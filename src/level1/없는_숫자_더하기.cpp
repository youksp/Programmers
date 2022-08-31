#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;

    for(int ii = 0; ii < numbers.size(); ++ii){
        answer -= numbers[ii];
    }


    return answer;
}

int main(){
    return 0;
}