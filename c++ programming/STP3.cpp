/*List in c++:List is c++ is also a container which is dyanmic meaning its size can be changed but it can be increased in both way back as well as front*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);
    for(auto it=ls.begin();it!=ls.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;
    
}