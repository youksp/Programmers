#include<bits/stdc++.h>
using namespace std;

int bon(int n){
    int one  =0;
    while(n != 0){
        if(n%2 == 0){
        }
        else one++;
        n/= 2;
    }
    return one;
}

int solution(int n) {
    int answer = 0;
    int buf = bon(n);
    while(1){
        n++;
        if(buf == bon(n)) return n;
    }
    return answer;
}

int main(){
    return 0;
}