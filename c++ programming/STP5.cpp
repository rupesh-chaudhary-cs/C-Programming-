//stack:stack follows LIFO Which means last in first out;
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.top() << endl; //5
    st.pop(); //5 is removed;
    cout << st.top() << endl; //4 is printed
    cout << st.size() << endl; // 4 is printed
    cout << st.empty() << endl;


    stack<int>s1,st2;
    s1.swap(st2);
    return 0;



}
