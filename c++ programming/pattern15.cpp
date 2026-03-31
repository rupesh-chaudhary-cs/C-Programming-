#include<bits/stdc++.h>
using namespace std;
int num=1;
void pattern15(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num+=1;    
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern15(n);
    return 0;
}