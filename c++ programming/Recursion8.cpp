//print 1 to N using using backtracking;
#include<bits/stdc++.h>
using namespace std;
void Fn(int i,int N){
    if(i<1){
        return;
    }
    Fn(i-1,N);
    cout << i << " ";
}
int main(){
    int num;
    cin >> num;
    int i;
    cin >> i;
    Fn(i,num);
    return 0;
}