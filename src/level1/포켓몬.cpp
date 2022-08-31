#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> pokeMon;
    for(int ii = 0; ii < nums.size(); ++ii){
        pokeMon.insert(nums[ii]);
    }

    if(nums.size() / 2 > pokeMon.size()){
        answer = pokeMon.size();
    } else {
        answer = nums.size() / 2;
    }

    return answer;
}

int main(){
    return 0;
}