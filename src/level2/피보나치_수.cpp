#include <string>
#include <vector>

using namespace std;


int solution(int n) {
    int answer = 0;
    vector<int> fibonacci;
    fibonacci.emplace_back(0);
    fibonacci.emplace_back(1);

    for(int ii = 2; ii <= n; ++ii){
        fibonacci.emplace_back((fibonacci[ii-2] % 1234567) +(fibonacci[ii-1] % 1234567));
    }
    answer = fibonacci.back() % 1234567;
    return answer;
}

int main(){
    return 0;
}