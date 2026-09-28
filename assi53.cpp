#include <iostream>
using namespace std;
class number
{
    int x;
public:
    number(int a)
    {
        x = a;
    }
    number operator+(const number& n)
    {
        return number(x + n.x);
    }
    void display()
    {
        cout << "sum = " << x << endl;
    }
};
int main()
{
    number n1(10);
    number n2(20);
    number n3 = n1 + n2;
     n3.display();
    return 0;
}
