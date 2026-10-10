#include <iostream>
using namespace std;

class A {
    int x;

public:
    A(int n) : x(n) {
        cout << "C" << x << " ";
    }

    ~A() {
        cout << "D" << x << " ";
    }
};

int main() {
    A a(1);
    A b(2);
    A c(3);
}