#include<iostream>
using namespace std;
class Student {
public:
    int marks;

    void setMarks(int m) {
        marks = m;
    }

    void display() {
        cout << marks;
    }
};