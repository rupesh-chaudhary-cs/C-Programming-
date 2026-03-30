#include<bits/stdc++.h>
using namespace std; //pass by reference:pass the original value of a variable in the place of copy;


void doBig(string &value){   
    value[0]='t';
    cout << value << endl;
}
int main(){
    string value;
    cin >> value;
    doBig(value);
    cout << value << endl;



    return 0;
}