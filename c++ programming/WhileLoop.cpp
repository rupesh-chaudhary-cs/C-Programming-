#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    while(i<=10){
        cout << "Rupesh" << i << "\n";
        i+=1;
    }
    int i=1;
    while(i<=5){

        if(i==4){
            break;
        }
        cout << "Happy" << i << "\n";
        i++;
    }
    int i=1;
    while(i<=10){
        if(i==5){
            i+=1;
            continue;
        }
        cout << "Welocome to Jugle " << i << "\n";
        i++;
    }
    return 0;
}