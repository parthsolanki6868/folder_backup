//RTTI type id operator
#include<iostream>
#include<typeinfo>
using namespace std;
class parent{
    public:virtual void display(){}

};
class child:public parent{

};
int main()
{
    child *pt=new child;
    parent *pb=pt;
    cout<<typeid(*pb).name()<<endl;
    cout<<typeid(pb).name()<<endl;
    cout<<typeid(*pt).name()<<endl;
    cout<<typeid(pt).name()<<endl;
    return 0;

}