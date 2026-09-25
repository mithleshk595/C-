#include<iostream>
using namespace std;

class A {
	public:
		int x;
		
		void setX(int x){
			this->x=x;
			
		}
		void show(){
			cout << this->x;
			
		}
		
};