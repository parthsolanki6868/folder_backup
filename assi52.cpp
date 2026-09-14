
#include <iostream>
using namespace std;

class student
{
    int rollno;

public:
    student(int r)
    {
        rollno = r;
    }

    student(student &s)
    {
        rollno = s.rollno;
    }

    void display()
    {
        cout << "rollno " << rollno << endl;
    }
};

int main()
{
    student s1(10);
    student s2(s1);

    cout << "original object:" << endl;
    s1.display();

    cout << "copied object:" << endl;
    s2.display();

    return 0;
}

