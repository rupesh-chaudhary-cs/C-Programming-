#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[0] << endl << arr[1] << endl;
    //same thing using for loop;
    int len=sizeof(arr);
    for(int i=0;i<len;i++){
        cout << "enter the value of " << i << " index:";
        cin >> arr[i];

    }
    for(int i=0;i<len;i++){
        cout << "The values of array are:" << arr[i];
    }
    return 0;
}