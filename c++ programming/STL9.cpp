#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int n=sizeof(a);
    int intd=lower_bound(a,a+n,2)-a;

    return 0;
}