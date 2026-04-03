
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>mpp;
    mpp[1]=2;
    mpp.insert({3,4});
    mpp.insert({2,6});
    for(auto it:mpp){
        cout << it.first << " " << it.second << endl;
    }
    auto it3=mpp.find(1);
    cout << (*it3).second << endl;
    cout << (*it3).first << endl;

    auto it4=mpp.find(88);
    cout << (*it4).second << endl;

    //lower bound;
    auto it5=mpp.lower_bound(1);
    cout << (*it5).first << " " << (*it5).second << endl;
    
    auto it6=mpp.lower_bound(4);
    cout << (*it6).first << " " << (*it6).second << endl;

    //upper bound;
    auto it7=mpp.upper_bound(2);
    cout << (*it7).first << " " << (*it7).second << endl;
    return 0;
}