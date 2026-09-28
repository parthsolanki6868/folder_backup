#include <iostream>
using namespace std;
class student
{
    static int count;
public:
    static void show_count()
    {
        cout << "num of objects = " << count << endl;
    }
    student()
    {
        count++;
    }
};
int student::count = 0;

int main()
{
    student s1;
    student s2;
    student s3;
    student::show_count();
    return 0;
}
