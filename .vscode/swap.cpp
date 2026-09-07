#include<iostream>
using namespace std;
void swap(int x, int y) {
    cout<<x<<endl;
    int temp = x
    x = y;
    y = temp;
    


}

int main() {
    int x = 12;
    int y = 45;
    cout<<&x<<endl;
    cout<<x<<" "<<y<<endl;
    swap(x, y);

    // int temp = x;
    // x = y;
    //y = temp;

    x = x + y;
    y = x  - y;
    x = x - y;

    cout<<x<<" "<<y<<endl;
}

