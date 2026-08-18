//classes and object with member function
#include<iostream>
using namespace std;
class first{
    public:int a;//data member
    public:int b;
    public:int multiplication(int x,int y,int z)//member function
{
    return x*y*z;
}
};
int main (){
    first f1;
    f1.a=10;
    f1.b=90;
    cout<<f1.a<<endl;
    cout<<f1.b<<endl;
    cout<<"function multiplication="<<f1.multiplication(2,2,2);
    return 0;
}