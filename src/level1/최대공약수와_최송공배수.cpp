#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    } else{
        return gcd(b, a%b);
    }
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcdNum = gcd(n>m?n:m,n<m?n:m);
    answer.emplace_back(gcdNum);
    answer.emplace_back((n * m) / gcdNum);
    return answer;
}

int main(){
    return 0;
}