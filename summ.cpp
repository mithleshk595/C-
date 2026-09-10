 calcultate the product
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 5};
    int n = 4;

    int product = 1;

    for (int i = 0; i < n; i++) {
        product = product * arr[i];
    }

    cout << "Product = " << product;

    return 0;
}