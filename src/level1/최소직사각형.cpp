#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int temp = 0;
    int width = 0;
    int length = 0;
    for(int ii = 0; ii < sizes.size(); ++ii){
        if(sizes[ii][0] < sizes[ii][1]){
            temp = sizes[ii][0];
            sizes[ii][0] = sizes[ii][1];
            sizes[ii][1] = temp;
        }
        if(width < sizes[ii][0]){
            width = sizes[ii][0];
        }
        if(length < sizes[ii][1]){
            length = sizes[ii][1];
        }
    }

    answer = width * length;
    return answer;
}

int main(){
    return 0;
}