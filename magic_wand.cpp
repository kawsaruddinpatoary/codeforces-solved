#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        int temp;
        for(int i = 0; i < n; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        int mod= arr[0]%2;
        bool flag=true;
        for(int i=1;i<n;i++){
            if(arr[i]%2 != mod){
                flag=false;
                break;
            }
        }
        if(flag){
            for(int val: arr){
                cout<<val<<" ";
            }
            cout << endl;
        }
        else{
            sort(arr.begin(), arr.end());
            for(int val: arr){
                cout<<val<<" ";
            }
            cout << endl;
        }
    }
}