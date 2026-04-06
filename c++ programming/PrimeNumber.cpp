#include<bits/stdc++.h>
using namespace std;
void checkPrime(int N){
    int count=0;
    for(int i=1;i*i<=N;i++){
        
        if(N%i==0){
            count++;
            if((N/i)!=i){
                count++;
            }

        }

    }
    if(count==2){
        cout << "PrimeNumber" << endl;
    }else{
        cout << "Not primenumber";
    }
}
int main(){
    int num;
    cin >> num;
    checkPrime(num);
    return 0;
}