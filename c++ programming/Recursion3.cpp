#include<bits/stdc++.h>
using namespace std;
int count1=1;
void printFn(int n){
    
    if(count1==n+1){
        return;
    }
    cout << count1 << endl;
    count1++;
    printFn(n);

}
int main(){
    int num;
    cin >> num;
    printFn(num);
    return 0;
}