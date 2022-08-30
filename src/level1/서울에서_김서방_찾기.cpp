#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";

    for(int ii = 0 ; ii < seoul.size(); ++ii){
        if("Kim" == seoul[ii]){
            char buffer[20];
            sprintf(buffer, "김서방은 %d에 있다", ii);
            answer = buffer;
        }
    }

    return answer;
}

int main(){
    return 0;
}