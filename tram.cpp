#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    int mincapacity = 0;
    int passanger = 0;
    for(int i=1; i<=n; i++){
        cin >> a >> b;
        int curr = (passanger - a) + b;
        passanger = curr;
        if(curr>mincapacity){
            mincapacity = curr;
        }
    }
    cout << mincapacity << endl;
    return 0;
}