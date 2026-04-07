//to check whether the number is palindrome or not
#include<bits/stdc++.h>
using namespace std;

int reverse_num=0;
void checkPalindrome(int N){
    int New=N;
    while(N>0){
        int last_digits=N%10;
        N=N/10;
        reverse_num=(reverse_num*10)+last_digits;


    }
    if(New==reverse_num){
        cout << "true";
    }else{
        cout << "false";
    }
}
int main(){
    int num;
    cin >> num;
    checkPalindrome(num);
    return 0;
}