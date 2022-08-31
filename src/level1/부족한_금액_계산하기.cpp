using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long neededCash = 0;
    for(int ii = 1; ii <= count; ++ii){
        neededCash += price * ii;
    }
    answer = neededCash - money;
    if(answer < 0){
        answer = 0;
    }
    return answer;
}

int main(){
    return 0;
}