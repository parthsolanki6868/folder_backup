#include<iostream>
using namespace std;

class point{
    public:
    int a;
};
int main(){
    point b[80];
    for(int i=71; i<81; i++){
        b[i].a=i;
        cout<<b[i].a<<" ";
    }

}