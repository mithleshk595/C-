#include<iostream>
uisng namespace std;

class Student {
public:
    int marks;

    Student(int m) {
        marks = m;
    }

    Student(const Student &s) {
        marks = s.marks;
    }
};