/* Array is the collection of elements of same data type stored in a contigious memory allocation*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    //1D array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;
    cout << arr[1];
    cout << arr[0];
    arr[4]=80;
    cout << arr[4];
    arr[3] +=4;
    cout << arr[3];


    return 0;
}