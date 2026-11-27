#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa) // constructor
    {
        (*this).roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rohim(45, 5, 3.20);
    Student korim(2, 5, 5);

    cout << rohim.roll << " " << rohim.cls << " " << rohim.gpa << endl;
    cout << korim.roll << " " << korim.cls << " " << korim.gpa;

    return 0;
}