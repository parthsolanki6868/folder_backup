//hybrid inheritance
#include<iostream>
using namespace std;
class base_one{
    public:base_one(){
        cout<<"base class one"<<endl;
    }
};
class base_two{
    public:base_two(){
        cout<<"base class two"<<endl;
    }
};
class derived_one:public base_one{
    public:void display(){
        cout<<"derived one called"<<endl;
    }
};
class  derived_two:public base_one,public base_two{
    public:void show(){
        cout<<"derived two called"<<endl;
    }
};
int main (){
    derived_one obj;
    obj.display();
    derived_two obj2;
    obj2.show();

    return 0;
    
}
