#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int mark;
};
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Student a, b, c;
        cin >> a.id >> a.name >> a.section >> a.mark;
        cin >> b.id >> b.name >> b.section >> b.mark;
        cin >> c.id >> c.name >> c.section >> c.mark;

        int mx = max({a.mark, b.mark, c.mark});
        if (mx == a.mark)
        {
            cout << a.id << " " << a.name << " " << a.section << " " << a.mark << endl;
        }
        else if (mx == b.mark)
        {
            cout << b.id << " " << b.name << " " << b.section << " " << b.mark << endl;
        }
        else if (mx == c.mark)
        {
            cout << c.id << " " << c.name << " " << c.section << " " << c.mark << endl;
        }

        
    }

    return 0;
}