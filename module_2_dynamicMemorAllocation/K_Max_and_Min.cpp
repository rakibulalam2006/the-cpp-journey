#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
    int a[i];
    int mn = INT_MAX;
    int mx = INT_MIN;
    while (cin >> a[i])
    {

        mn = min(a[i], mn);
        mx = max(a[i], mx);
        // if (mx < a[i])
        // {
        //     mx = a[i];
        // }
        }

    cout << mn << " " << mx;
    return 0;
}