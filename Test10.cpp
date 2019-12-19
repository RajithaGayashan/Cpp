
#include<iostream>
using namespace std;
int main(){
	string password="password";
	cout<<"Enter password"<<endl;
	string input;
	cin>>input;
	if(input==password){
		cout<<"you can access";
	}else{
		cout<<"password incorrect";
	}
}
