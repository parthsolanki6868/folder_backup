#include<iostream>
using namespace std;
class student 
{
    int rollno;
    string name;
    public:student(int r=1,string n="unknown")
    {
        rollno=r;
        name=n;
    }
    void display()
    {
        cout<<"rollno:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
    }
};
int main ()
{
    student s1;
    student s2(10,"rahul");
    cout<<"student1:"<<endl;
    s1.display();
    cout<<"\n student2:"<<endl;
    s2.display();
    return 0;
}