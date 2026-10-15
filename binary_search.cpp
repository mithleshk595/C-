
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9};
    int key = 8;

    if (binary_search(&array[0], &array[7], key))
        cout << "found";
    else
        cout << "not found";

    return 0;
}



