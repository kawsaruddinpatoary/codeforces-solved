#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str;
    cin>> str;
    if(*(str.begin()) >= 97){
        str[0] = str[0] - 32;
    }
    cout << str << endl;
}