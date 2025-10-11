#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n, x=0;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i].find('+') != std::string::npos){
            ++x;
        }else{
            --x;
        }
    }
    cout << x << endl;
}