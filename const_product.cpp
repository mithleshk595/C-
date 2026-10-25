#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived";
    }
};

int main() {
    Base obj;
    Base* p = &obj;

    Derived* d = dynamic_cast<Derived*>(p);

    if (d == nullptr)
        cout << "Failed";
    else
        d->show();

    return 0;
}