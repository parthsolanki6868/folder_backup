// manipulation of string using operator
#include<iostream>
#include<cstring>
using namespace std;

class SM {
    char s1[20], s2[20];

public:
    SM(const char x[], const char y[]) {
        strcpy(s1, x);
        strcpy(s2, y);
    }

    void show() {
        cout << s1;
    }

    void operator+() {
        strcat(s1, s2);
    }
};

int main() {
    SM s("Parth", "Solanki");
    +s;
    s.show();
}
