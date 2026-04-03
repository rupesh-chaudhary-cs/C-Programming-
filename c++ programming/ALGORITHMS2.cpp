#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=7;
    long num2=7337333827;
    int count_binary=__builtin_popcount(num);
    cout << count_binary << endl;
    long long count_binary2=__builtin_popcount(num2);
    cout << count_binary2 << endl;
    return 0;
}