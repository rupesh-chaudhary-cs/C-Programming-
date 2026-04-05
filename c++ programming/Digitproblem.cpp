#include<bits/stdc++.h>
using namespace std;
void cntDigit(int number){
    int count=0;
    int i=number;
    while(i>0){
        int last_digit=i%10;
        cout << last_digit;
        i=i/10;
        count++;

    }
    cout << endl;
    cout << "No of digits are:" << count << endl;
}
int main(){
    cntDigit(7789);

    return 0;
}