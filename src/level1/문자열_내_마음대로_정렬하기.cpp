#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int i;

bool compare(string s1, string s2, int n){
    if(s1.size() >= n){
        return false;
    }

    if(s1[i]  ==  s2[i]){
        return compare(s1, s2, n+1);
    }
    return s1[i] > s2[i];
}

bool compareOri(string s1, string s2){
    if(s1[i]  ==  s2[i]){
        return compare(s1, s2, i+1);
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