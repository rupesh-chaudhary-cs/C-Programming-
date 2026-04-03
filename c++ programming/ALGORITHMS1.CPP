/*Algorithms for sorting of array,vecotors etc;*/
// #include<bits/stdc++.h>
// using namespace std;
// void Fn(int arr[]){
//     int n=sizeof(arr);
//     sort(arr,arr+n);
//     cout << arr;
// }
// int main(){
//     Fn({2,1,5,4});
//     return 0;
// }

//for sorting of array: sort(a,a+n)
//for sorting of vecotor :sort(v.begin(),v.end()) //and all are  like(start ,end ) where it take one less than end
// for  sorting of elements at some specific place it is like :sort(a+2,a+4): it will sort element 3rd and 4th element;
// for sorting in descending order:sort(a,a+n,greater<int>)
//for sorting as per own way we can write like:
//sort(a,a+n,comp) //Note where comp is comparison that means it can be written as per my own way;

#include<bits/stdc++.h>
using namespace std;
int main(){
    bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second<p2.second) return True;
        if(p1.second>p2.second) return false;
        if(p1.first>p2.first) return True;
        else False;
    }
    pair<int,int>a[]={{1,2},{3,4}};
    int n=3;
    sort(a,a+n,comp);
    return 0;
}