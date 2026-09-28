#include<iostream>
using namespace std;
int main()
{
    int num;

    std::cout<<"enter a number:";
    std::cin>>num;

    std::cout<<"multiplication table for"<<num<<":\n";

    for(int i=1;i<=10;i++)
    {
        std::cout<<num<<"x"<<i<<"="<<num*i<<std::endl;
    }
    return 0;
}