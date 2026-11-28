#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // if (a < b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << b;
    // }
    // cout<<min(a,b)<<endl;
    cout << "minimum number is:" << min({a, b, c, d}) << endl;
    cout << "maximum number is:" << max({a, b, c, d}) << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}