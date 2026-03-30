#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="Rupesh";
    cout << str << "\n";
    cout << str[0] << "\n";
    int len=str.size();
    cout << len << "\n";      
    str[len-1]='s';   //string is mutable in c++
    cout << str[len-1];


    return 0;
}