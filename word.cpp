#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    int upper=0, lower = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i]>=97)
            lower++;
        else if(str[i]<=90)
            upper++;
    }
    if(lower>=upper){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    cout << str << endl;
}