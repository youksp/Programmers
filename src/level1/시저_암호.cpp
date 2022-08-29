#include <string>
#include <vector>

using namespace std;

char shift(char _c, int _diff){
    
    if(_c >= 'A' && _c < 'Z'){
        _c += _diff;
        if(_c > 'Z'){
            _c = _c - 'Z' + 'A';
        }
    } else if (_c >= 'a' && _c < 'z'){
        _c += _diff;
        if(_c > 'z'){
            _c = _c - 'z' + 'a';
        }
    }

    return _c;
}

string solution(string s, int n) {
    string answer = "";

    for(int ii = 0; ii < s.size(); ++ii){
        answer.push_back(shift(s[ii], n));
    }  

    return answer;
}

int main(){
    solution("z", 1);
    return 0;
}