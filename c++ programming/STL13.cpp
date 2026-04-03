//unordered set:is the set which stores unique elements but are not sorted;
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>us;
    us.insert(1);
    us.insert(4);
    us.insert(1);
    us.insert(5);
    us.insert(2);
    for(auto it:us){
        cout << it << " ";
    }
    cout << endl;
    us.erase(2);
    auto it2=us.find(1);
    cout << *(it2) << endl;

    return 0;
}