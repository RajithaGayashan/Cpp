// input & simple calculator
#include<iostream>
using namespace std;
int main(){
	 int x,y,n;
	 cout<<"What do you want?\n1.Sum\n2.Sub\n3.Mul\n4.Div\n5.exit"<<endl;
	 cin>>n; 
	 cout<<"Enter first input :";
	 cin>>x;
	 cout<<"Enter second input :";
	 cin>>y;
	 if(n==5){
	 	cout<<"Thanks"<<endl;
	 }else{
	 	switch(n){
	 	case 1:
	 		cout<<"Sum:"<<(x+y)<<endl;	
	 		break;
	 	case 2:
	 		cout<<"Sub:"<<(x-y)<<endl;
	 		break;
		 case 3:
	 		cout<<"Mul:"<<(x*y)<<endl;
			break;
	 	case 4:
	 		cout<<"Div:"<<(x/y)<<endl;
			break;
	 	default:
	 		cout<<"Invalid input"<<endl;
	 	}
	 }
}
