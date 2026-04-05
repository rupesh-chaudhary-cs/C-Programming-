#include<bits/stdc++.h>
using namespace std;
int reverse_Num=0;
int reverseNum(int N){
    while(N>0){
        int last_digit=N%10;
        N=N/10;
        reverse_Num=(reverse_Num*10)+last_digit;
    }
    return reverse_Num;
}
int main(){
    int N;
    cin >> N;
    int result=reverseNum(N);
    cout << result;
    return 0;
}