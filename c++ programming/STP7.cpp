/*priority queues :is the queue in which value are stored like a stack in descending order and it have push,top,pop functions */
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(1);
    pq.emplace(2);
    pq.push(5);
    pq.push(4);
    pq.push(9);
    cout << pq.top()<< endl;
    pq.pop();
    cout << pq.top() << endl;
    
    return 0;
}