#include<bits/stdc++.h>
using namespace std;
int count1=1;

void printName(int N){
    if(count1==N+1){
        return;

    }
    cout << "Rupesh" << " ";
    count1++;
    printName(N);

}
//without using global variable;
void printName2(int i,int N2){
    if(i>N2){
        return;
    }
    cout << "Jaiswal" << " ";
    i++;
    printName2(i,N2);

}
int main(){
    int num;
    cin >> num;
    printName(num);
    int N2;
    int i;
    printName2(i,N2);
    return 0;
}