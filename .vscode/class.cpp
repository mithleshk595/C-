#include<iostream>
using namespace std;

class Test {
    int x;

public:
    void setX(int a) {
        x = a;

    }
    void show() {
        cout <<x<<endl;

    }


};

int main(){
    Test t1, t2;

    t1.setX(10);
    t2.setX(20);
    t1.show();
    t2.show();

    return 0;
    


}
