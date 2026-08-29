//Hierarchical Inheritance
#include<iostream>
using namespace std;
class base_class{
    private:int x;
    protected:int y;
    public:int z;
    public:void base_display()
{
    x=60;
    cout<<"private data member x="<<x<<endl;
}
};
class derived_one:public base_class{
    public:void one_assigned(){
        y=70;
        z=20;
    }
    public:void derived_one_display(){
        cout<<"protected y="<<y<<endl;
        cout<<"public z="<<z<<endl;
    }
};
class derived_two:public base_class{
    public:void two_assigned(){
        y=500;
        z=800;
    }
    public:void derived_two_display(){
        cout<<"protected y ="<<y<<endl;
        cout<<"public z ="<<z<<endl;
    }
};
int main (){
    derived_one d1;
    d1.one_assigned();
    d1.derived_one_display();
    derived_two d2;
    d2.two_assigned();
    d2.derived_two_display();
    d1.base_display();
    return 0;
}
