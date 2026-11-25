#include <bits/stdc++.h>
using namespace std;

int *p;
void fun()
{
    int* x = new int;
    *x = 10;
    p = x;
    cout << "func ->" << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "main ->" << *p << endl;
    return 0;
}