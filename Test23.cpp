
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
		cout<<sum();
	else if(operation==2)
		cout<<sub();
	else if(operation==3)
		cout<<mul();
	else if(operation==4)
		cout<<div(); 
}

int sum(){
	for(int i=1;i<=input;i++){
		value+=num[i];
		}
	return value;
}
int sub(){
	int value1=num[1];
	for(int i=1;i<=input;i++){
		value1-=num[i+1];
		}
	return value1;
}
int mul(){
	int value1=num[1];
	for(int i=1;i<input;i++){
		value1*=num[i+1];
		}
	return value1;
}
int div(){
	double value1=num[1];
	for(int i=1;i<input;i++){
		value1/=num[i+1];
	}
	return value1;
}
