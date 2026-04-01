#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p={1,3};
    cout << p.first << endl;
    cout << p.second << endl;
    pair<int ,pair<int,int>>q= {8,{2,3}};
    cout << q.first << " " << q.second.first << " " << q.second.second;

    pair<int ,int >arr[]={{1,2},{3,4},{5,6}};
    cout << arr[1].second << endl;
    cout << arr[1].first;
    

}