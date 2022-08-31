#include <string>
#include <vector>
#include <iostream>

using namespace std;

int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
string week[7] = {"THU","FRI","SAT","SUN","MON","TUE","WED"};

string solution(int a, int b) {
    string answer = "";
    int day = 0;
    for(int ii = 0; ii < a - 1; ++ii){
        day += month[ii];
    }
    day += b;
    answer = week[day % 7];

    return answer;
}

int main(){
    cout<< solution(5,24) <<endl;

    return 0;
}