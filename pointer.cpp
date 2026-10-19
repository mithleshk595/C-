#include<iostream>
using namespace std;

class Test {
    int x, y;

public:
    Test(int _x, int _y) : x(_x), y(_y) {}

    Test(Test &c) : x(c.x), y(c.y) {}

    void change(Test *new_c) {
        this = new_c;
    }

    void show() {
        cout << x << ", " << y << endl;
    }
};