#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,t,count=0;
    cin >> t;
    while(t){
        count=0;
        cin >> a >> b >> c >> d;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        cout << count << endl;
        count=0;
        t--;
    }
}