#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(5);
    ms.insert(5);
    ms.insert(4);
    ms.emplace(6);
    ms.insert(6);
    ms.insert(6);
    

    for(auto it:ms){
        cout << it << " ";
    }
    cout << endl;
    int cnt=ms.count(5);
    cout << cnt << endl;
    auto it1=ms.find(1);
    cout << *(it1) << endl;
    auto it2=ms.find(10);
    cout << *(it2) << endl;

    //lower bound;
    auto it3=ms.lower_bound(99);
    cout << *(it3) << endl;

    //upperbound;
    auto it5=ms.upper_bound(3);
    cout << *(it5) << endl;

    auto it6=ms.upper_bound(5);
    cout << *(it6) << endl;

    ms.erase(1); //is use to delete the specific element ;


    for(auto it:ms){
        cout << it << " ";
    }
    cout << endl;
    ms.erase(ms.find(6));
        for(auto it:ms){
        cout << it << " ";
    }

    return 0;
}