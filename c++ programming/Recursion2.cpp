/*Recursion is when a function calls itself multiple condition unless given condition is True*/
#include<bits/stdc++.h>
using namespace std;
int count1=0;
void Recursion(){
    if(count1==4){  //this is the base case due to which recursion will stop;
        return;     //stack space :is the space where the remaining to be executed function wait;
    }
    cout << count1 << endl;
    count1++;
    Recursion();
    

}
int main(){
    Recursion();
    return 0;
}