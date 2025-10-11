#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n,t, min=0, a, result = 0;
    vector<int> counts;


    cin >> t;
    while(t){
        counts.clear();
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            counts.push_back(a);
        }
        min = *(min_element(counts.begin(), counts.end()));

        for(int i=0; i<counts.size(); i++){
            result += (counts[i] - min);
        }

        cout << result << endl;
        result = 0;
        min = 0;

        t--;
    }
}