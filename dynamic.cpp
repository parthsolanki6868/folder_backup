// dynamic initialization of object
#include<iostream>
using namespace std;

class Dynamic_object{
    public:int p;
    public: Dynamic_object(){}
    public: Dynamic_object(int x){
        p=x;
        cout<<"p="<<p<<endl;
    }
};
int main (){
    Dynamic_object o;
    int data;
    cout<<"enter object data";
    cin>>data;
    o=Dynamic_object(data);
    return 0;
}