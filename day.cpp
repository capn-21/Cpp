#include <iostream>
using namespace std;

string dayf(int day){
	string name;
	switch(day){
		case 0:name="Sunday";break;
		case 1:name="monday";break;
		case 2:name="tuesday";break;
		case 3:name="wed";break;
		case 4:name="thurs";break;
		case 5:name="fri";break;
		case 6:name="sat";break;
		default:name="Invalid number";
	}
	return name;
}

int main(){
	
	cout<<dayf(7);	
}




