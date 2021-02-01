#include <iostream>
using namespace std;
int main(){
	int arr[3]={1,23,4};
	
	cout<<arr[1];
	
	string colour,plural,celeb;
	cout<<"enter a colour";
	getline(cin,colour);
	
	
	cout<<"enter a plurial";
	getline(cin,plural);
	
	cout<<"enter a celeb";
	getline(cin,celeb);
	cout<<"roses are" << colour <<endl;
	cout<<plural <<" are blue"<<endl;
	cout<<"i love "<<celeb<<endl;
}
