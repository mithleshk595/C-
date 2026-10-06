#include<iostream.
using namespace std;

class A {
public:
    int x;

    A(int n) {
        x = n;
    }

    A(const A& obj) {
        x = obj.x;
    }
};