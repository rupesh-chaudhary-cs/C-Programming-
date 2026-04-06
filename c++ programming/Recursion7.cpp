//print from N to 1;
#include<bits/stdc++.h>
using namespace std;
void Fn(int N , int i){
    if(i>N){
        return;
    }
    cout << N << " ";
    N--;
    Fn(N,i);
}
int main(){
    int N;
    cin >> N;
    int i;
    cin >> i;
    Fn(N,i);
    return 0;
}