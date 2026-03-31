#include<bits/stdc++.h>
using namespace std;
void pattern10(int n){
    for(int i=0;i<n+4;i++){
        for(int j=0;j<(n+i-n);j++){
            cout << " ";
        }
        for(int j=0;j<(n+4-2*i);j++){
            cout << "*";
        }
        for(int j=0;j<(2*n)-(2*i+1);j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern10(n);
    return 0;
}