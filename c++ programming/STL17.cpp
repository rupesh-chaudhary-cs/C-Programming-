//unordered map:It is like unordered set ,so it will contain unique key but duplicate keys and it will be not sorted;
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>mpp;
    mpp.insert({1,2});
    mpp.insert({2,3});
    mpp.insert({4,6});
    mpp.insert({3,8});
    for(auto it:mpp){
        cout << it.first << " " << it.second << endl;
    }

    //all are same as map and multimap;
    return 0;
}