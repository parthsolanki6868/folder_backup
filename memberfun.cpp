//member function inside the class
#include<iostream>
using namespace std;
class demo{
    public:int x;
    public:int y;
    public:void set_data(int a,int b){
        x=a;
        y=b;
    }
    public:void get_data(){
        cout<<x<<endl;
        cout<<y;
    }
};
int main (){
    demo d1;
    d1.set_data(10,70);
    d1.get_data();
}