#include<iostream>
using namespace std;

class A {
public:
    int x;

    A(const A &obj) {
        x = obj.x;
    }
};