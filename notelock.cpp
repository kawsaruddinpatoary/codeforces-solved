#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        string str;
        cin >> n;
        cin >> k;
        cin >> str;
        int count=0, lastIndex = -k;
        for(int i=0; i<n; i++){
            if(i==0 && str[i]=='1'){
                lastIndex=i;
                count++;
            }else if(str[i]=='1' && i-lastIndex >= k){
                lastIndex=i;
                count++;
            }else if(str[i]=='1' && i - lastIndex < k){
                lastIndex = i;
            }
        }
        cout << count << endl;
    }
}