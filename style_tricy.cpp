nclude<iostream>
using namespace std;

class A {
	public:
		int x;
		
		A() {
			x = 10;
			
		}
		
};

int main() {
	A a, b;
	
	a.x = 20;
	
	cout<<a.x;
	
	cout<<b.x;
	
}