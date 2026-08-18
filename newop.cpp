//new operator
#include<iostream>
using namespace std;
int main()
{
    int *a=new int;
    *a=90;
    cout<<"Address=="<<a<<endl;
    cout<<"value=="<<*a;
    return 0;
}