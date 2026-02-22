#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "enter the age of the person:";
    cin >> age;
    if(age>=18){
        cout << "You are an Adult";

    }else if(age<18){
        cout << "You are Not Adult";
    }
    
    return 0;
}


