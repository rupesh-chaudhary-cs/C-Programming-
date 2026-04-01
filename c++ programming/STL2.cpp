/* Vector and iterators;*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5,100);
    cout << v[0] << endl;
    vector<int>v1(v);
    cout << v1[1];
    v1.push_back(3);
    cout << v1[5];
    v1.emplace_back(44);
    cout << v1[6] << endl;
    for(auto it=v1.begin();it!=v1.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;
    for(int it:v1){
        cout << it << " ";
    }

}