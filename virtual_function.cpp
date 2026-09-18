//virtual function
#include<iostream>
using namespace std;
class A
{
    public:virtual void display()
    {
        cout<<"base class invoked"<<endl;
    }
};
class B:public A
{
    public:void display()
    {
        cout<<"derived class invoked"<<endl;
    }
};
int main ()
{
    A*a,a_obj;
    B b;
    a=&b;
    a->display();
    a_obj.display();
    
}