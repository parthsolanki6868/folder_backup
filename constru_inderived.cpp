#include<iostream>
using namespace std;
class base1{
    public:base1(int x){
        cout<<"base1 value:"<<x<<endl;
    }
};
class base2{
    public:base2(int y){
        cout<<"base2 value:"<<y<<endl;
    }
};
class derived:public base1,public base2{
    public:derived(int a,int b):base1(a),base2(b){
        cout<<"derived class"<<endl;
    }
};
int main(){
    derived d1(10,20);
    return 0;
}