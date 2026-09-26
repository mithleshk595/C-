#include<iostream>
using namespace std;
class A {
public:
    static int count;

    static void show() {
        cout << count;
    }
};

int A::count = 7;

int main() {
    A::show();
}