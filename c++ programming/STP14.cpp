/*Map:It is a container or data structure that is used to store values in key,value form where key is always unique and sorted form but the value is duplicate in the form like{a,b} where a is key and b is value*/
#include<bits/stdc++.h>
using namespace std;
void mapFn(){
    map<int,int>mpp;
    mpp[1]=2;
    mpp[3]=4;
    mpp.insert({2,5});
    for(auto it:mpp){
        cout << it.first << " " << it.second << endl;
    }
}
void mapFn2(){
    map<pair<int,int>,int>mpp;
    mpp[{1,2}]=11;
    cout << mpp[{1,2}] << endl;

}
int main(){
    mapFn();
    mapFn2();
    return 0;
}