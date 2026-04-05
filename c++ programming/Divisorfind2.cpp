#include<bits/stdc++.h>
using namespace std;
void divisor(int N){
    vector<int>V;
    int sum=0;
    for(int i=1;i*i<=36;i++){
        if(N%i==0){
            sum+=1;
            V.push_back(i);
            if((N/i)!=i){
                sum+=1;
                V.push_back(N/i);
            }
        }
        

    }
    for(auto it:V){
        cout << it << " ";
    }
    cout << endl;
    cout << "No of divisiors are:" << sum;
}
int main(){
    int num;
    cin >> num;
    divisor(num);

    return 0;
}