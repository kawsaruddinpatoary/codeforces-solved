#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        long long cost = 0;
        
        for (int i = 0; i < n - 1; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] >= a[i+1])
                {
                    cost += a[i] - a[i+1] + 1;
                    a[i] = a[i+1] - 1;
                }
            }
            else
            {
                if (a[i] <= a[i+1])
                {
                    cost += a[i+1] - a[i] + 1;
                    a[i+1] = a[i] - 1;
                }
            }
        }
        
        cout << cost << endl;
    }
    return 0;
}