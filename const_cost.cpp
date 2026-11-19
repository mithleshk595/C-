#include <iostream>
using namespace std;

int main() {
    int x = 15;
    int* p = &x;

    const int* q = p;
    int* r = const_cast<int*>(q);

    *r = 25;

    cout << x;
    return 0;
}
