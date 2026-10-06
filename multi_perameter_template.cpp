#include <iostream>
using namespace std;

template<class T, class t1, class t2>
void fun(T a, t1 b, t2 c)
{
    cout << "welcome to template" << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main()
{
    fun(1, 'H', true);
    return 0;
}
