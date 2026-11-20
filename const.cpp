#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;

    const int* q = p;
    int* r = const_cast<int*>(q);

    *r = 35;

    cout << x;
    return 0;
}
