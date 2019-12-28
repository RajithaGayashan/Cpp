
#include<iostream>
using namespace std;
int main(){
	const string password="rajitha123";
	string input;
	do{
		cout<<"Enter the password : ";
		cin>>input;
		if(input==password){
			cout<<"Password accepted"<<endl;
			break;
		}
		else{
			cout<<"Invalid password"<<endl;
		}
	}
	while(true);
	cout<<"End"<<endl;
		
}
