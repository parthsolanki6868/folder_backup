//classes and object example
#include<iostream>
using namespace std;
class first{
    public:int a;//data member
    public:int b;
};
int main(){
    first f1;
    f1.a=10;
    f1.b=90;
    cout<<f1.a<<endl;
    cout<<f1.b;
    return 0;
}