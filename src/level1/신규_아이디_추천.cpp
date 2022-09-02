#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    //1,2
    for(int ii = 0; ii < new_id.size(); ++ii){
        if(new_id[ii] >= 'A' && new_id[ii] <= 'Z'){
            new_id[ii] = new_id[ii] - 'A' + 'a';
        } else if((new_id[ii] < '0' || new_id[ii] > '9') && 
                    new_id[ii] != '_' && new_id[ii] != '-' && new_id[ii] != '.' &&
                    (new_id[ii] < 'a' || new_id[ii] > 'z')){
            new_id.erase(new_id.begin() + ii);
            --ii;
        }
    }

    //3
    string tempStr;
    for(int ii = 2; ii < new_id.size(); ++ii){
        tempStr.clear();
        tempStr.assign(ii,'.');
        while(new_id.find(tempStr) != string::npos){
            int start = new_id.find(tempStr);
            new_id.replace(new_id.begin() + start, new_id.begin() + start + ii, ".");
        }
    }

    //4
    if(!new_id.empty()){
        if(new_id[0] == '.'){
            new_id.erase(new_id.begin());
        }
        if(new_id.back() == '.'){
            new_id.pop_back();
        }
    }

    //5
    if(new_id.empty()){
       new_id += "a"; 
    }

    //6
    if(new_id.size() >= 16){
       new_id = new_id.substr(0, 15);
       if(new_id.back() == '.'){
            new_id.pop_back();
        }
    }

    //7
    while(new_id.size() <= 2){
        new_id += new_id.back();
    }
    answer = new_id;
    return answer;
}

int main(){
    return 0;
}