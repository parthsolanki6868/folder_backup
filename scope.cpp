//scope resolution operator
#include<iostream>
using namespace std;
int a=200;
int main()
{
    int a=20;
    cout <<"local A="<<a<<endl;
    cout <<"global A="<<::a;
    return 0;
}