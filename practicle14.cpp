#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,remainder;
    std::cout<<"enter on integer:";
    std::cin>>num;

    int originalnum=num;

    if(num<0)
    {
        num=-num;
    }
    while(num>0)
    {
        remainder=num%10;
        sum+=remainder;
        num/=10;
    }
    std::cout<<"the sum of the digit of"<<originalnum<<"is:"<<sum<<std::endl;
    return 0;
}