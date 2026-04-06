#include<bits/stdc++.h>
using namespace std;
void findGCF(int N1,int N2){
    int gcd=1;
    for(int i=1;i<=min(N1,N2);i++){
    
        if(N1%i==0 && N2%i==0){
            gcd=i;

        }
    }
    cout << "the greatest commond factor is:" << gcd;

}
int main(){
    int num1,num2;
    cin >> num1;
    cin >> num2;
    findGCF(num1,num2);
    return 0;
}