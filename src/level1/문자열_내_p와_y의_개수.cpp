#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int counter = 0;

    for(auto c : s){
        if(c == 'p' || c == 'P'){
            ++counter;
        }else if(c == 'y' || c == 'Y'){
            --counter;
        }
    }
    answer = counter == 0 ? true : false;
    return answer;
}

int main(){
    return 0;
}