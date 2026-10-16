#include <iostream>
using namespace std;

void show(int x) {
    cout << "INT";
}

void show(double x) {
    cout << "DOUBLE";
}

int main() {
    show(5.5f);
    return 0;
}