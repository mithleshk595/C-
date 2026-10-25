#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void show() {
        cout << "Hello";
    }
};

int main() {
    Base obj;
    Base* p = &obj;

    Derived* d = static_cast<Derived*>(p);
    d->show();

    return 0;
}