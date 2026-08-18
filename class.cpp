#include<iostream>
using namespace std;
class operate{
    public: void fun(); 
};
void operator::fun(){
    cout<<"hey there i am fun mem fun";
}
int main(){
    operate op;
    op.fun();
    return 0;
}