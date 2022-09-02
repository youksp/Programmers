#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    int nRtn = a > b ? b : a;

    while(a % nRtn != 0 || b % nRtn != 0){
        --nRtn;   
    }

    return nRtn;
}

int lcm(int a, int b){
    return (a * b) /gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 0;
    int a = 0; 
    int b = 0;

    while(arr.size() != 1){
        a = arr.back();
        arr.pop_back();
        b = arr.back();
        arr.pop_back();

        arr.emplace_back(lcm(a, b));
    }
    answer = arr.back();
    return answer;
}

int main(){
    return 0;
}