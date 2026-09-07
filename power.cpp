#include<iostream>
using namespace std;
int main (){
    int base,exp;
    int result=1;
    cout<<"enter base:";
    cin>>base;
    cout<<"enter exponent:";
    cin>>exp;
    for(int i=1; i<=exp; i++)
    {
        result=result * base;
    }
    cout<<"result="<<result;
    return 0;
}