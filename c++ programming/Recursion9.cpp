//print N to 1 using recursion backtracking;
#include<bits/stdc++.h>
using namespace std;
void Fn(int i,int N){
    if(i>N){
        return;
    }
    Fn(i+1,N);
    cout << i << " ";
}
int main(){
    int i;
    cin >> i;
    int N;
    cin >> N;
    Fn(i,N);
    return 0;
}