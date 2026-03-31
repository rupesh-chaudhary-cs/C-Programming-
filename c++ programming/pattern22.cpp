#include<bits/stdc++.h>
using namespace std;
void pattern22(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<(2*n-2*i-2);j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern23(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout << "*";
        }
        for(int j=0;j<2*i;j++){
            cout << " ";
        }
        for(int j=0;j<(n-i);j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern22(n);
    pattern23(n);
    return 0;
}