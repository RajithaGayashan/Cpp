
#include<iostream>
using namespace std;
int main(){
	const string password="rajitha1234";
	string input;
	do{
		cout<<"Enter the password : ";
		cin>>input;
		if(input!=password){
			cout<<"Invalid password"<<endl;
		}
	}
	while(input!=password);
	
	cout<<"password accepted";12
	
}
