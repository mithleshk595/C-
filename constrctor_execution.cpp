#include <iostream>
using namespace std;

class A {
public:
    A(int x) {
        cout << x << " ";
    }
};

int main() {
    A a(10);
    A b(20);
    A c(30);
}