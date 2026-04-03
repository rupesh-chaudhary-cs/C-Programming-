/*Set:It is a container which is used to store unique data and in sorted order that means in ascending order*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.emplace(4);
    s.emplace(3);
    for(auto it:s){
        cout << it << " ";
    }
    cout << endl;
    auto it=s.find(3);
    s.erase(3);
    int count=s.count(1);
    cout << count << endl;
    auto it2=s.find(1);
    cout << *(it2) << " "; //it find the whether it exists or not ,if exists it return its value;
    auto it3=s.find(33);
    cout << *(it3) << endl;
    s.erase(3);
    auto it4=s.lower_bound(5);
    cout << *(it4) << endl;
    auto it5=s.lower_bound(7);
    cout << *(it5) << endl;

    auto it6=s.upper_bound(5);
    cout << *(it6) << "\n";

    auto it7=s.upper_bound(6);
    cout << *(it6) << "\n";




    return 0;
}