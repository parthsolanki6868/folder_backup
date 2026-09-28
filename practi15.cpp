#include<iostream>
using namespace std;
int main()
{
    int num,original,reverse=0;
    int remainder;

    cout<<"enter a number:";
    cin>>num;

    original=num;

    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    if(original==reverse)
    cout<<"palindrome number";
    else
    cout<<"not a palindrome number";
    return 0;
}