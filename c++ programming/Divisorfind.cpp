#include<bits/stdc++.h>
using namespace std;
void Divisor(int N){
    int sum=0;
    int i=1;
    while(i<=N){
        if (N%i==0){
            cout << i << endl;
            sum+=1;
        }
        i+=1;
    }
    cout << "No of divisors:" << sum << endl;
}
int main(){
    int num;
    cin >> num;
    Divisor(num);
    return 0;
}