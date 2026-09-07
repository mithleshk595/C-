#include<iostream>
using namespace std;

int main() {
    float length, breadth, area, perimeter;
    cout << "Enter length :";
    cin >> length;

    cout << "Enter breadth :";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "Area is greater than perimeter" endl;


    }
    else if (area < perimeter) {
        cout << "perimeter is greater than area" endl;

    }
    else {
        cout << "Area is equal to perimeter" endl;

    }



}