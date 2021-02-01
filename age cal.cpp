#include <iostream>
using namespace std;

int agecal(int age);

int main(){
	agecal(5);
}


int agecal(int age){
	if(age<=18){
		cout<<"you smol";
	}else{
		cout<<"you big";
	}
}
