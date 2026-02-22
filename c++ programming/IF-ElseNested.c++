/*
Take the age from the user and then decide accordingly
1.If age<18,
 print -> not eligible for job
 2.If age >=18,
 print -> "eligible for job"
 3.If age>=55 and age<=57,
 print-> 'eligible for job,but retirement soon"
 4.If age>57
 print-> "retirement time"
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Enter your age:";
    cin >> age;
    if(age>=18){
        if(age>=18 && age<=54){
            cout << "Eligible for job\n";
        }else if(age>=55 && age<=57){
            cout << "eligible for job ,but retirement soom";
        }else{
            cout << "retiremnt time";
        }
    }else{
        cout << "not eligible for job\n";
    }

    

    return 0;
}