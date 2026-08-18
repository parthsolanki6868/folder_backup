//perametrized example
#include<iostream>
using namespace std;
class constru_pera{
    public:int a;
    public:constru_pera(int x){
        a=x;
        cout<<"A=="<<a;
    }
};
int main ()
{
    constru_pera obj(50);
}