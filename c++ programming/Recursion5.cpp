#include<bits/stdc++.h>
using namespace std;
void printName2(int i,int N2){
    if(i>N2){
        return;
    }
    cout << "Jaiswal" << " ";
    i++;
    printName2(i,N2);

}
int main(){
    int N2;
    cin >> N2;
    int i;
    cin >> i;
    printName2(i,N2);
    return 0;
}