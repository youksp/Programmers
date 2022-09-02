#include <string>
#include <vector>

using namespace std;

string voca[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int solution(string s) {
    int answer = 0;


    for(int ii = 0; ii < 10; ++ii){
        while(s.find(voca[ii]) != string::npos){
            s.replace(s.find(voca[ii]), voca[ii].size(), to_string(ii));
        }
    }
    answer = stoi(s);
    return answer;
}