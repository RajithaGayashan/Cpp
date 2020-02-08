//A function using pointers
#include<iostream>
using namespace std;
void change(int *dat);
int main(){
	int data=100;
	change(&data);
	cout<<data<<endl;
}
void change(int *dat){
	*dat=200;
}
