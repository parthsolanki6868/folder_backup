//pointer to derived class 
#include<iostream>
using namespace std;
class base{
    public:void fun(){
        cout<<"\n base";
    }
};
class derived:public base
{
    public:void fun(){
        cout<<"\n derived";
    }
};
int main ()
{
   
    derived d;
    base * bptr=&d;
    bptr->fun();
}