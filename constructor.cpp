#include<iostream>
using namespace std;
class TestClass {
    int i;

public:
    TestClass(int i = 0) : i(i) {
        cout << i << " ";
    }

    ~TestClass() {
        cout << i << " ";
    }
};

TestClass obj1(2);

int main() {
    TestClass *pObj = new TestClass(1);
    TestClass obj2(3);

    {
        TestClass obj3(4);
        delete pObj;
    }

    return 0;
}