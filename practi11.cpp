#include<iostream>
using namespace std;
int main()
{
    int num,reversenum =0,remainder;

    std::cout<<"enter an integer:";
    std::cin>>num;

    int originalnum=num;

    while(num!=0)
    {
        remainder=num%10;
        reversenum=reversenum*10+remainder;
        num/=10;
    }

    std::cout<<"original number:"<<originalnum<<std::endl;

    std::cout<<"reversed number:"<<reversenum<<std::endl;

    return 0;
} 