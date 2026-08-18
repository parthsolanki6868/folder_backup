//aerrow operator
#include<iostream>
using namespace std ;
class aerrow{
    public:int rollnumber;
};
int main (){
    aerrow a;
    aerrow *ptr;
    ptr=&a;
    ptr->rollnumber=90;
    cout<<a.rollnumber;
    return 0;
}