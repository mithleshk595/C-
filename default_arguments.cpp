#include<iostream>
using namespace std;

class A {
    public:
    A(int x = 10){
        cout << x << " ";

    }

};
int main() {
    A a;
    A b(20);
    A c();

    
}