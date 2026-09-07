#include<iostream>
using namespace std;
void swapnumbers(int * a,int * b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main (){
    int x,y;
    cout<<"enter two number:";
    cin>>x>>y;
    swapnumbers(&x,&y);
    cout<<"after swapping:\n";
    cout<<"first number="<<x<<endl;
    cout<<"second number="<<y;
    return 0;
}