//class to class
#include<iostream>
using namespace std;
class first{
    public:char s;
    public:first(char x)
    {
        s=x;
    }
    public:void display()
    {
        cout<<"class first="<<s<<endl;
    }
};
class second{
    public:char s1;
    public:second(char y)
    {
        s1=y;
    }
    public:void show()
    {
        cout<<"class second="<<s1<<endl;
    }
    second(first f1)
    {
        s1=f1.s;
    }
};
int main ()
{
    first o1('y');
    second o2=o1;
    o1.display();
    o2.show();
    return 0;
}