
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		cout<<"i is :"<<i<<endl;
		if(i==3){
			continue;
		}
		cout<<"Looping"<<endl;
	}
	cout<<"End"<<endl;
}
