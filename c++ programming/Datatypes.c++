#include<bits/stdc++.h>
using namespace std;
int main(){
    //int and long;
    int x=20;
    cout << "The value of x:" << x << "\n";
    int y;
    cout << "enter the value of Y:";
    cin >> y;
    cout << "The value of Y :" << y << "\n";
    long z=3888888;
    cout << "The value of z is:" << z <<"\n";
    //float and double;
    float a=3.3f;
    cout << "The float value is:" << a <<"\n";
    double b;
    cout << "enter the value of b:";
    cin >> b;
    cout << "The value of b is:" << b << "\n";
    //string;
    string c="Rupesh Kumar Chaudhary";
    cout << "my name is :" << c << "\n";
    //string while taking input;
    string a1,a2;
    cout << "enter the value of a1 and a2:";
    cin >> a1 >> a2;
    cout << "the value of a1: " << a1 << "and a2 is: " << a2 << "\n";
    //string while taking a line ;
    cin.ignore();
    string str;
    cout << "enter the value of string:";
    getline(cin,str);
    cout << "The entire string value is: " << str;


    return 0;
}
