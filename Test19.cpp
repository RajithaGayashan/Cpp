
#include<iostream>
using namespace std;
int main(){
	int value[10]={1,2,3,4,5};
	for(int i=0;i<=sizeof(value)/sizeof(int);i++){
		cout<<value[i]<<endl;
	}
	cout<<"..............."<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(value)<<endl;
	
	
}
