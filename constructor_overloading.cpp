#include<iostream>
using namespace std;

class A {
    public:
        A() {
            cout << "A";

        }
        A(int x) {
            cout << "B";

        }
        A(int x, int y) {
            cout << "C";

        }
        
}
int main() {
    A a;
    A b(5);
    A c(5, 20);
    
}