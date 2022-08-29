#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    answer.assign(phone_number.size() - 4, '*');
    for(auto iter = phone_number.end() - 4; iter != phone_number.end(); ++iter){
        answer.push_back(*iter);
    }
    return answer;
}

int main(){
    return 0;
}