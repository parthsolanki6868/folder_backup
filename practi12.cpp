#include<iostream>
using namespace std;
int main()
{
    int num;
    bool isprime=true;
    
    std::cout<<"enter a positive integer:";
    std::cin>>num;

    if(num<=1)
    {
        isprime=false;
    }
    else
    {
        for(int i=2;i*i<=num;i++)
        {
            if (num%i==0)
            {
                isprime=false;
                break;
            }
        }
    }
    if(isprime)
    {
        std::cout<<num<<"is a prime numbers."<<std::endl;
    }
    else
    {
        std::cout<<num<<"is a not prime number."<<std::endl;
    }
    return 0;
}