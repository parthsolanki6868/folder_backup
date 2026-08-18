// c structure
#include<iostream>
using namespace std;
struct point {
    int x;
    int y;
};
int main (){
    struct point p1;            
    p1.x=60;
    p1.y=90;
    cout<<"value of x="<<p1.x<<endl;
    cout<<"value of y="<<p1.y;
    return 0;
}