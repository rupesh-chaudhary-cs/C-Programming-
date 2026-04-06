#include<bits/stdc++.h>
using namespace std;
void printNum(int i,int N){
    if(i>N){
        return;
    }
    cout << i << " ";
    printNum(i+1,N);
}
int main(){
    int num;
    cin >> num;
    int i;
    cin >> i;
    printNum(i,num);

}