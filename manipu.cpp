#include<iomanip>
#include<ios>
#include<iostream>
using namespace std;
int main()
{
    int a=50;
    cout<<"Before setw"<<a<<endl;
    cout<<"setting width"<<setw(5)<<endl;
    cout<<a;
    return 0;
}