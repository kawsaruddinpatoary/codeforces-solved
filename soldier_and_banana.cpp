#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w, temp = 1, total = 0, result;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++){
        total += temp*k;
        temp++;
    }

    if(total<n){
        cout << 0 << endl;
    }else{
        cout << total - n << endl;
    }
}