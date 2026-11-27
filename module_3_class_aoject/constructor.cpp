#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g)  //constructor
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};

int main()
{
    Student rohim;
    cin >> rohim.roll >> rohim.cls >> rohim.gpa;
    Student korim;
    cin >> korim.roll >> korim.cls >> korim.gpa;

    // Student rohim(45, 5, 3.20);
    // Student korim(2, 5, 5);

    cout << rohim.roll << " " << rohim.cls << " " << rohim.gpa << endl;
    cout << korim.roll << " " << korim.cls << " " << korim.gpa;

    return 0;
}