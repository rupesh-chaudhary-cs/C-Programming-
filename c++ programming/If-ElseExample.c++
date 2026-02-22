/*  A school has following rules for grading sysems:
a.Below 24-F
b.25 to 44-E
c.45 to 49-D
d.50 to 59-C
e.60 to 79-B
f.80 to 100-A
Ask user to enter marks and print the corrossponding grade;

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks:";
    cin >> marks;
    if(marks>=80){
        cout << "Grade-A\n";
    }else if(marks>=60){
        cout << "Grade-B\n";
    }else if(marks>=50){
        cout << "Grade -C\n";
    }else if(marks>=45){
        cout << "Grade -D\n";
    }else if(marks>=25){
        cout << "Grade-E\n";
    }else{
        cout << "Grade-F\n";
    }
    return 0;
}