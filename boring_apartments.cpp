#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    int digit = 0;
    int temp = n;
    while(temp){
        digit++;
        temp /= 10;
    }
    return digit;
}

int main(){
    int t, a;
    cin >> t;
    while(t){
        cin >> a;
        int digits = countDigit(a);
        int temp = a%10;
        int sum = (temp-1)*10;
        int sum2 = (digits*(digits+1))/2;
        sum += sum2;
        cout << sum << endl;
        t--;
    }
}