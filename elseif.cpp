//if-else example
#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"enter age";
    cin>>age;
    cout<<age<<endl;
    if (age==18)
        cout<<"you are adult";
        else if (age==50)
        cout<<"you are senior";
        else if(age==70)
        cout<<"your are super senior";
        else
        cout<<"you are not in age";
        return 0;
}