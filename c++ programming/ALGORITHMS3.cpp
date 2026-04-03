//string permutation:like example:123:123,132,213,231,312,321
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="321";
    sort(str.begin(),str.end());
    do{
        cout << str << endl;
    }while(next_permutation(str.begin(),str.end()));

    int a[4]={2,22,33,44};
    int n=4;
    int maximum_element=*max_element(a,a+n);
    cout << maximum_element << endl;

    return 0;
}

//to find the maximum elements of either array or any other;

