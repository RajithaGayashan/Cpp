
#include<iostream>
using namespace std;
int main(){
	int input;
	cout<<"Enter the number : ";
	cin>>input;
	
	switch(input){
		case 1:
			cout<<"You entered number 1";
			break;
		case 2:
			cout<<"You entered number 2";
			break;
		case 3:
			cout<<"You entered number 3";
			break;
		default:
			cout<<"You entered invalid number ";
	}
}
