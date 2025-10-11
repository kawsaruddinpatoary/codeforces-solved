#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t, result;
    string a, b;
    cin >> t;
    while(t){
        a.clear();
        b.clear();
        cin >> a >> b;

        if(*(a.end()-1) < *(b.end()-1)){
            result = 1;
        }else if(*(a.end()-1) > *(b.end()-1)){
            result = 2;
        }else{
            int x1 = a.length() - 1;
            int x2 = b.length() - 1;
            char last = *(a.end() - 1);
            if(x1>x2 && last == 'S'){
                result = 2;
            }
            else if(x1>x2 && last == 'L'){
                result = 1;
            }else if(x1<x2 && last == 'S'){
                result = 1;
            }else if(x1<x2 && last=='L'){
                result = 2;
            }
            else{
                result = 0;
            }
        }

        if(result == 1){
            cout << ">" << endl;
        }else if(result == 2){
            cout << "<" << endl;
        }else if(result==0){
            cout << "=" << endl;
        }

        result = 0;
        t--;
    }
}