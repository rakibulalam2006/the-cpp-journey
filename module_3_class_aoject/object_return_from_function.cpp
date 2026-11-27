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

Student fun()
{
    Student rohim(45, 5, 3.20);
    return rohim;
}

int main()
{
    Student s = fun();
    cout << s.roll << " " << s.cls << " " << s.gpa << endl;
    return 0;
}