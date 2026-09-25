#include<iostream>
using namespace std;

class A {
	public:
		int x;
		
		void set(int x){
			this->x=x;
			
		}		
};
int main() {
	A a;
	a.set(25);
	
	cout<< a.x;
	
}