#include <iostream>
using namespace std;

int power(int basenum,int pow){
int	result=1;

for(int i=0;i<pow;i++){	
	result=result*basenum;
	
}
cout<<"The answer is :"<<result<<endl;
}


int main(){
	int base,pow;
	cout<<"Enter the base number:";
	cin>>base;
	cout<<"Enter the Power";
	cin>>pow;
	
	power(base,pow);
}
