#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n :";
    cin >> n;

    if(n%3==0 or n%5==0) {
        cout << n << " is divisible by 3 or 5";

    }
    else {
        cout << n << " is not divisible by 3 or 5";
        
    }
}