/** 
VS Code 사용시 gdb가 한글을 인식하지 못하여 path 에러가 난다
그때를 위해 만든 cpp
여기에 코드 복사해서 디버깅 테스트 진행
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int i;


bool compareOri(string s1, string s2){
    if(s1[i]  ==  s2[i]){
        for(int ii = 0; ii < s1.size(); ++ii){
            if(s1[ii] < s2[ii]){
                return s1[ii] < s2[ii];
            }
        }
    }
    return s1[i] < s2[i];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    i = n;
    sort(strings.begin(), strings.end(), compareOri);
    answer = strings;
    return answer;
}

int main(){
    vector<string> testvec = {"abce", "abcd", "cdx"};
    solution(testvec, 2);
    return 0;
}