// Basic if-else example
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    cout << "Age = " << age << endl;

    if (age > 18)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << "You are below 18";
    }

    return 0;
}