#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n,temp;
    string strTemp = "";
    char b,e;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i].length()>10){
            temp = arr[i].length() - 2;
            b =  *(arr[i].begin());
            e = *(arr[i].end() - 1);
            strTemp.clear();
            strTemp.push_back(b);
            strTemp.append(to_string(arr[i].length()-2));
            strTemp.push_back(e);
            arr[i] = strTemp;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
}