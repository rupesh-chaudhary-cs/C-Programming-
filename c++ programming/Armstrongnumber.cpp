#include<bits/stdc++.h>
using namespace std;
void Armstrong(int N){
    int New=N;
    int sum=0;
    int digits=log10(N)+1;
    while (N>0)
    {
        int last_digit=N%10;
        int cube=pow(last_digit,digits);
        N=N/10;
        sum+=cube;
    }
    if(sum==New){
        cout << "Armstrong Number";
    }else{
        cout << "Not Armstrong Number";
    }
    
}
int main(){
    int num;
    cin >> num;
    Armstrong(num);

}