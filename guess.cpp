#include <iostream>
using namespace std;
int main(){
	int num=3;
	int guess,gcount=0,glimit=3;
	bool outofg=false; 
	
	while(guess!=num && !outofg){
		if(gcount<glimit){
		
		cout<<"Enter the number";
		cin>>guess;
		gcount++;}
		else {
			outofg=true;
		}
	}
	if(outofg){
	cout<<"You are out of guesses";
	}else {

	
	cout<<guess<<" is the correct guess";
	
	}
	

	
	
	
	
	
}
