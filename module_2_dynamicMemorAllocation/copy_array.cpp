#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i + n];
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}