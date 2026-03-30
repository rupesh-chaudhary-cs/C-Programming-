#include<bits/stdc++.h>
using namespace std;
//pass by value: Is that type of function where the original value of variable does not goes to the parameter of the function but its copy goes there;
void changeNumber(int num){
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}
int main(){
    int num;
    cin >> num;
    changeNumber(num);
    cout << num;
    return 0;


}