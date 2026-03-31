#include<bits/stdc++.h>
using namespace std;
int num=1;
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            
            cout << num << " ";

        }
        num+=1;
        cout << endl;
    }
}
int main(){
    int n;
    cout << "enter the number:";
    cin >> n;
    pattern3(n);

}