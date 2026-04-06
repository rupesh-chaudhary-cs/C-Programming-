#include<bits/stdc++.h>
using namespace std;
void EUCLIDEAN(int N1,int N2){
    int N=N1-N2;
    int gcd=1;
    int gcd2=1;
    for(int i=1;i<=min(N1,N2);i++){
        if(N1%i==0 and N2%i==0){
            gcd=i;

        }
    }
    
    for(int i=1;i<=min(N,N2);i++){
        if(N%i==0 and N2%i==0){
            gcd2=i;

        }

    }
    if(gcd==gcd2){
        cout << "yes";
    }else{
        cout << "no";
    }
}
int main(){
    int num1,num2;
    cin >> num1;
    cin >> num2;
    EUCLIDEAN(num1,num2);
    return 0;
}