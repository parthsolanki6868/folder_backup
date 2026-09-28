#include <iostream>
using namespace std;

class Father {
public:
    void showFather() {
        cout << "This is the Father class." << endl;
    }
};

class Mother {
public:
    void showMother() {
        cout << "This is the Mother class." << endl;
    }
};

class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;

    obj.showFather();
    obj.showMother();
    obj.showChild();

    return 0;
}
