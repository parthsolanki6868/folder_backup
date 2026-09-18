#include<iostream>
#include<cstring>
using namespace std;

class stud {
public:
    int rno;
    char name[40];

    void show() {
        cout << "roll=" << rno << endl;
        cout << "name=" << name << endl;
    }
};

int main() {
    stud s1;
    stud *s = &s1;

    s->rno = 121;
    strcpy(s->name, "parth");

    s1.show();

    return 0;
}
