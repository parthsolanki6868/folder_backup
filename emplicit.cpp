//emplicit invocation of constructor
#include<iostream>
using namespace std;
class explicit_constru{
    public:int a;
    public:explicit_constru(int x){
        a=x;
        cout<<"A=="<<a;

    }
};
int main ()
{
    explicit_constru obj(50);//implicit
    obj=explicit_constru(60);//explicit
}