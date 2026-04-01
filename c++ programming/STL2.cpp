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
    cout << endl;
    //deletion of element
    v1.erase(v1.begin());
    cout << endl;
    for(int it:v1){
        cout << it << " ";
    }
    cout << endl;
    //deletion of multiple elements that requries [start,end]
    v1.erase(v1.begin()+1,v1.begin()+3);
    for(auto it:v1){
        cout << it << " ";
    }

    //Insertion function;
    vector<int>v2(6,20);
    cout << v2[0] << endl;
    for(vector<int>::iterator it=v2.begin();it!=v2.end();it++){
        cout << *(it) << " ";

    }
    cout << endl;
    v2.insert(v2.begin(),30);
    cout << v2[0] << endl;
    v2.insert(v2.begin()+1,2,5);
    for(auto it=v2.begin();it!=v2.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;
    //length of vector: v.size();
    vector<int>v8(4,5);
    cout << v8.size() << "\n";
    //pop_back() ,it is used to remove the last element of the vector;
    vector<int>v9(3,3);
    v9.pop_back();
    for(auto it:v9){
        cout << it << " ";
    }
    cout << endl;
    
    //clear;
    v9.clear(); //is used to remove all the elements of the vector
    
    vector<int>v10(2,2);
    vector<int>v11(3,3);
    v10.swap(v11);
    for(auto it:v10){
        cout << it << " ";
    }
    cout << endl;

    


}