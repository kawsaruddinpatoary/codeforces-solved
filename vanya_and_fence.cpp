#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h,count=0, temp;
    cin >> n >> h;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> temp;
        arr.push_back(temp);
        if(temp>h){
            count++;
        }
    }
    cout << n + count << endl;
}