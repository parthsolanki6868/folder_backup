// static member function
#include<iostream>
using namespace std;
class employee{
public:static void add_stat(void){
        cout<<"static member function"<<endl;
    }
    public:void normal_fun(void){
        cout<<"normal member function"<<endl;
    }
};
int main(){
    employee e1;
    e1.normal_fun();
    employee::add_stat();
    return 0;
}