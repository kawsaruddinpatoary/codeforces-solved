#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0, temp=0;
    int arr[3];
    cin >> n;
    for(int i=0; i<n; i++){
        temp=0;
        for(int i=0; i<3; i++){
            cin >> arr[i];
            temp += arr[i];
        }
        if(temp>=2){
            count++;
        }
    }

    cout << count << endl;
}