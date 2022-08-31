#include <string>
#include <vector>
#include <map>
#include <functional>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    hash<string> strHash;
    multimap<size_t, string> playerMap;
    for(int ii = 0; ii < participant.size(); ++ii){
        playerMap.insert(pair<size_t, string>(strHash(participant[ii]), participant[ii]));
    }
    
    for(int ii = 0; ii < completion.size(); ii++){
       auto iter = playerMap.find(strHash(completion[ii]));
       playerMap.erase(iter);
    }

    answer = playerMap.begin()->second;

    return answer;
}

int main(){
    return 0;
}