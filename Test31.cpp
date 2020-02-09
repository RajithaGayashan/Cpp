//Array(using pointers)
#include<iostream>
using namespace std;
int main(){
	int numbers[5]={10,20,30,40,50};
	int *nP1=&numbers[0];
	int *nP2=numbers;
	cout<<nP1[0]<<endl;
	cout<<*nP2<<endl;

}
