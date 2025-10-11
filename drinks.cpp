#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> arr(n);
    double sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+= (double)arr[i]/100;
    }
    double result = (sum/n)*100;
    cout << result << endl;
}