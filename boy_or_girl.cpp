#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    vector<char> unique;
    bool found=false;

    for(int i=0; i<str.length(); i++){
        found = false;
        for(int j=i+1; j<str.length(); j++){
            if(str[i] == str[j]){
                found = true;
            }
        }
        if(found==false){
            unique.push_back(str[i]);
        }
    }

    if(unique.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
}