#include<iostream>
using namespace std;
class const_default{
    public:const_default()
    {
        cout<<"default constructor";
    }
    public:void display()
    {
        cout<<"display function";
    }
};
int main()
{
    const_default d1;
    d1.display();
    return 0;
}