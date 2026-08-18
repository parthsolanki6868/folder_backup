#include<iostream>
using namespace std;

class point{
    public:
    int a;

    void fun(int p){
        cout<<"print the argument:"<<p<<endl;
        cout<<"object as member function argument";
    }
};
int main (){
    point b;
    b.a=10;
    b.fun(b.a);        
}
