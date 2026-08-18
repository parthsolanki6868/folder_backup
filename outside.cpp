// member function outside the class
#include<iostream>
using namespace std;
class point{
    public:int box(int width,int height,int weight); //declare
};
int point ::box(int width,int height,int weight)//definition
{
    return width*height*weight;
}
int main(){
    point p1;
    cout<<"box value=="<<p1.box(300,300,300);
    return 0;
}