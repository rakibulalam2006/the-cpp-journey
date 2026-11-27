// problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    bool is_pl = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if (a[i] != a[j])
        {
            is_pl = false;
        }
    }
    if (is_pl == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}