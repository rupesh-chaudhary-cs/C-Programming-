#include<bits/stdc++.h>
using namespace std;

void isPrime(int N){
    int count=0;
    for(int i=1;i<=N;i++){
        if(N%i==0){
            count+=1;
            if((N/i!=i)){
                count++;
            }
        }
    }
    if(count==2){
        cout << "The number is prime";
    }else{
        cout << "The number is not prime";
    }
}
int main(){
    int num;
    cin >> num;
    isPrime(num);

}