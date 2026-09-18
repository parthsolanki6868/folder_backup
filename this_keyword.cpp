//this keyword
#include<iostream>
using namespace std;
class test{
    public:int a;
    public:void setA(int a){
        this->a=a;
    }
    public:void getA(){
        cout<<"value of A=="<<a<<endl;
    }
};
int main()
{
    test t;
    t.setA(60);
    t.getA();
}