#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30};
    int* p = a;

    cout << *p++ << " ";
    cout << *p;

    return 0;
}






