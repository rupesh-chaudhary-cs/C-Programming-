//draw pattern3
#include<bits/stdc++.h>
using namespace std;
int num=0;
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            num+=1;
            cout << num << " ";
        }
        num=0;
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern3(n);
    return 0;
}