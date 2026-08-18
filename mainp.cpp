
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 50;

    cout << "Before setw: " << a << endl;
    cout << "After setw: " << setw(5) << a << endl;

    return 0;
}