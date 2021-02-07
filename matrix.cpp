#include <iostream>
using namespace std;
int main(){
	int arr[3][3]={
	{7,8,10},
	{9,1,3},
	{4,7,6}
	
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<endl;
		}
	}
}
