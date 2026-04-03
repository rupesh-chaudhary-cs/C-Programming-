#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    for(auto it:ms){
        cout << it << " ";
    }
    cout << endl;
    auto it =ms.find(1);
    ms.erase(it,next(it,2));
    for(auto it:ms){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}