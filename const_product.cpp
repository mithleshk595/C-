#include <iostream>
using namespace std;

class Product {
    int id;
    double price;

public:
    Product(int _id, double _price)
        : id(_id), price(_price) {}

    void updatePrice(double p) const {
        (const_cast<Product*>(this))->price = p;
    }

    void showInfo() const {
        cout << id << " : " << price;
    }
};

int main() {
    const Product p(101, 499.99);
    p.updatePrice(549.99);
    p.showInfo();
    return 0;
}