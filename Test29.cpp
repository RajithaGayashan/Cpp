//Pointers-(2)
#include<iostream>
using namespace std;
int main(){
	int *p;
	int data=100;
	p=&data;
	int number;
	number=*p;
	cout<<number<<endl;
}
