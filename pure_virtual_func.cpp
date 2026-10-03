#include<iostream>
using namespace std;

class a
{
    public:virtual void show()=0;

};

class b:public a
{
    public:
            void show()
            {
                cout<<"derived show called"<<endl;
            
            }
};
int main()
{
    b obj;
    obj.show();

}