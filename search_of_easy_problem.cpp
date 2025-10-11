#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool easy = true;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            easy = false;
            break;
        }
    }
    
    if(easy==true)
        cout << "Easy" << endl;
    else cout << "Hard" << endl;
}