// problme link: https : // codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <bits/stdc++.h>
                       using namespace std;
int main()
{
    int a, b, c, ans;
    char s, eq;
    cin >> a >> s >> b >> eq >> c;

    if (s == '+')
    {
        ans = a + b;
        if (ans == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    else if (s == '-')
    {
        ans = a - b;
        if (ans == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    else if (s == '*')
    {
        ans = a * b;
        if (ans == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}