#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        string temp = s;
        cin >> n;
        cin >> s;
        reverse(temp.begin(), temp.end());
        vector<int> vec;
        if(temp!=s){
            for(int i=0; i<s.length(); i++){
                if(s[i]=='1'){
                    vec.push_back(i+1);
                }
            }
            cout << vec.size() << endl;
            for(int i=0; i<vec.size(); i++){
                cout << vec[i] << " ";
            }
            cout << endl;
        }else{
            cout << 0 << endl;
        }
    }
}