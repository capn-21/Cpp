#include <iostream>
using namespace std;

class Book {
		public:
			string name;
			string writer;
			int pages;
};


int main(){
	
	Book a1;
	a1.name="Gatsby";
	a1.pages=500;
	a1.writer="qw";
	
	Book a2;
	a2.name="20k leagues";
	a2.pages=800;
	a2.writer="er";
	
	
	cout<<a1.pages<<endl;
	
		cout<<a2.pages;
	
}
