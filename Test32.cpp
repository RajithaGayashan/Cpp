//Array(using pointers)(2)
#include<iostream>
using namespace std;
int main(){
	int numbers[5]={10,20,30,40,50};
	int *number=numbers;
	cout<<*number<<endl;
	cout<<*(number+1)<<endl;
	number++;
	cout<<*number<<endl;
	number+=2;
	*(number)+=5;
	cout<<*number<<endl;
	
	
}

