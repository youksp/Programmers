#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, int> mailMap;
    unordered_map<string, unordered_set<string>> warningMap;

    for(int ii = 0 ; ii < id_list.size(); ++ii){
        mailMap.insert(pair<string, int>(id_list[ii], 0));
        warningMap.insert(pair<string, unordered_set<string>>(id_list[ii], unordered_set<string>()));
    }

    for(int ii = 0; ii < report.size(); ++ii) {
        string complainant;
        string defendant;
        int space = report[ii].find(" ");
        complainant = report[ii].substr(0, space);
        defendant = report[ii].substr(space + 1, report[ii].size() - (space + 1));
        warningMap[defendant].insert(complainant);
    }
    
    for(auto warning : warningMap){
        if(warning.second.size() >= k){
            for(auto mail : warning.second){
                mailMap.find(mail)->second += 1;
            }
        }
    }

    for(auto id : id_list){
        answer.emplace_back(mailMap.find(id)->second);
    }

    return answer;
}

int main(){
    return 0;
}