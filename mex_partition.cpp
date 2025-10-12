#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,n;
    cin >> t;
    while(t){
        cin >> n;
        vector<int> vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        int x=0;
        int score;
        while(true){
            auto it = find(vec.begin(), vec.end(), x);
            if(it==vec.end()){
                score=x;
                break;
            }else{
                x++;
            }
        }
        cout << score << endl;

        t--;
    }
}