//Array(using pointers)(3)
#include<iostream>
using namespace std;
int main(){
	int num[10]={21, 2, 61, 20, 86, 44, 37, 10, 0, 1};
	int *number=num;
	for(int i=0;i<10;i++){
		cout<<*number++<<endl;
	}
	cout<<endl;
	int temp[10];
	for(int j=0;j<10;j++){
		temp[j]=num[j];
	}
	number=num;
	int k=9;
	for(int l=0;l<10;l++){
		num[l]=temp[k];
		k--;
	}
	for(int m=0;m<10;m++){
		cout<<*number++<<endl;
	}
}
