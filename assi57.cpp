#include <iostream>
using namespace std;

class student
{
public:
    void display_student()
    {
        cout << "student name: rahul" << endl;
    }
};

class result : public student
{
public:
    void display_result()
    {
        cout << "marks: 85" << endl;
    }
};

int main()
{
    result r;

    r.display_student();
    r.display_result();

    return 0;
}
