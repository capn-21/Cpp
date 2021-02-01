#include <iostream>
using namespace std;
int cube(int a);
int main(){
	
	int result=cube(123);
	cout<<result; //or just cout<<cube(123);
}

int cube(int a){
	int c;
	c=a*a*a;
	return c; //or just "return a*a*a"
}
