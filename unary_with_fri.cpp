//unary operator overloading using friend function 

#include<iostream>
using namespace std;
class Uwf{
    int a;
    float b;
    public:Uwf(int x,float y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    friend void operator - (Uwf &o);
};
void operator - (Uwf &o){
    o.a=-o.a;
    o.b=-o.b;
}
int main (){
    Uwf a(5,5.5);
    a.show();
    -a;
    a.show();
}