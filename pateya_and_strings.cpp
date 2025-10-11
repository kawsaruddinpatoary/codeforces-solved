#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;

    int result = 0;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    if(str1 < str2){
        result = -1;
    }else if(str1 > str2){
        result = 1;
    }
    else{
        result = 0;
    }
    cout << result << endl;
}