class Employee {
public:
    int empId;
};

class Product {
public:
    int productId;
};

int main() {
    Employee* e = new Employee;
    Product* p;

    p = reinterpret_cast<Product*>(e);
}