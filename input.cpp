#include <iostream>
using namespace std;
int main(){
float a,b,c;
string name;
	cout<<"enter yor name:";
	getline(cin,name);
	cout<<"your name is:"<<name;
	cout<<"\nenter the value of a and b for addition\n";
	cin>>a>>b;
	c=a+b;
	cout<<"addition is "<<c<< endl;
}
