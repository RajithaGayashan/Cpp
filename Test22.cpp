
#include<iostream>
#define MAX 100
using namespace std;
int sum();
int sub();
int mul();
int div();
int input;
int value=0;
int num[MAX];
int main(){
	int operation;
	cout<<"1.sum\n2.sub\n3.mul\n4.div\n";
	cout<<"Enter the operation :";
	cin>>operation;
	cout<<"number of inputs : ";
	cin>>input;
	for (int i=1;i<=input;i++){
		cout<<i<<" Number : ";
		cin>>num[i];
	}
	if(operation==1)
		sum();
	else if(operation==2)
		sub();
	else if(operation==3)
		mul();
	else if(operation==4)
		div(); 
}

int sum(){
	for(int i=1;i<=input;i++){
		value+=num[i];
		}
	cout<<"sum : "<<value;
}
int sub(){
	int value2=num[1];
	for(int i=1;i<=input;i++){
		value2-=num[i+1];
		}
	cout<<"sub : "<<value2;
}
int mul(){
	int value2=num[1];
	for(int i=1;i<input;i++){
		value2*=num[i+1];
		}
	cout<<"mul : "<<value2;
}
int div(){
	double value3=num[1];
	for(int i=1;i<input;i++){
		value3/=num[i+1];
	}
	cout<<"div : "<<value3;
}
