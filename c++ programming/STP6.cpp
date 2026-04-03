/*Queue:is a type of data structure that follows FIFO*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
    q.back()+=4;
    cout << q.front() << "\n";
    cout << q.back() << "\n";
    q.pop();
    cout << q.front() << endl;
    return 0;
}