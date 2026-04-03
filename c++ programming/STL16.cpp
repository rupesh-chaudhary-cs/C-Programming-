//multimap:Multimap is a container which is used to store value in key and values where key as well value can be duplicate but are in sorted array meaning key must be in sorted order;
#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,int>mpp;
    mpp.insert({1,6});
    mpp.insert({1,3});
    mpp.insert({2,5});
    mpp.insert({3,5});
    for(auto it:mpp){
        cout << it.first << " " << it.second << endl;
    }
    auto it2=mpp.find(1);
    cout << (*it2).first << " " << (*it2).second << endl;

    //remaining all functions are same like map;

    return 0;
}