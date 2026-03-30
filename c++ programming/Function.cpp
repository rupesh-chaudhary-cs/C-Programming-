/* Funciton is a block of code which is used to perform specific task.
A function is a reusable block of code that can be used multiple times
Function is used to increase readability
Funcion is used to use same code multiple times;
Function are used to use same code multiple times
Types of fuction;
1.Void function -> that doesnot return any value 
2.return function
3.parameterized function
4.non parameteriszed fuction
*/

#include<bits/stdc++.h>
using namespace std;
void printName(string name){
    cout << "hey " << name << "\n" ;
}
int main(){
    string name;
    cin >> name;
    printName(name);
    printName("biki");
    string name2;
    cin >> name2;
    printName(name2);
    
    return 0;
}