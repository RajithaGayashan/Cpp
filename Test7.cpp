 
#include<iostream>
using namespace std;
int main(){
	int iValue=-7656;
	cout<<iValue<<endl;
	cout<<sizeof(int)<<endl;//4 bytes(32 bits)
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;
	
	long int lValue=5656558;
	cout<<lValue<<endl;
	cout<<sizeof(long int)<<endl;//4 bytes(32 bits)
	 
	short int sValue=7864;
	cout<<sValue<<endl;
	cout<<sizeof(short int)<<endl;//2 bytes(16 bits)
	
	unsigned int uValue=87565;
	cout<<uValue<<endl;
	cout<<sizeof(signed int)<<endl;//4 bytes(32 bits)
	 
}
