#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n, count=0;
    string str;
    stack<char> stk;
    stk.push('0');
    cin >> n;
    cin >> str;

    for(int i=0; i<n; i++){
        if(str[i]==stk.top()){
            count++;
        }else{
            stk.push(str[i]);
        }
    }

    cout << count << endl;
}