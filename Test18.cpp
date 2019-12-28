
#include<iostream>
using namespace std;
int main(){
	
	int value1[3];
	value1[0]=10;
	value1[1]=20;
	value1[2]=30;
	cout<<"Array of integer"<<endl;
	cout<<value1[1]<<endl;
	cout<<value1[2]<<endl;
	cout<<value1[0]<<endl;
	
	cout<<"Array of integer(2)"<<endl;
	int value2[]={100,200,300,400,500};
	int value3[6]={1000,2000,3000,4000,5000};
	cout<<value2[1]<<endl;
	cout<<value2[2]<<endl;
	cout<<value3[0]<<endl;
	
	cout<<"Array of doubles"<<endl;
	double value4[]={1.01,2.02,3.03,4.04,5.05};
	cout<<value4[1]<<endl;
	cout<<value4[2]<<endl;
	cout<<value4[0]<<endl;
	
	cout<<"Initializing with zero values"<<endl;
	int value5[8]={};
	cout<<value5[1]<<endl;
	cout<<value5[2]<<endl;
	cout<<value5[0]<<endl;
	
	cout<<"Array of string"<<endl;
	string value6[3]={"banana","mango","apple"};
		for(int i=0;i<3;i++){
			cout<<value6[i]<<endl;
	}
	
	
}
