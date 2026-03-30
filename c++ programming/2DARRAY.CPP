#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cout << "enter the number of rows:";
    cin >> m;
    int n;
    cout << "enter the number of columns:";
    cin >>n;
    int arr[m][n];
    /*taking input of 2D array*/
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    /*Printing the value of 2D array*/
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    

    return 0;
}