
#include<iostream>
using namespace std;
int main(){
	string vihicle[][3]={{"Toyota","Benz","BMW"},{"TATA","Isuzu","Mazda"}};
	cout<<"...sizeof..."<<endl;
	cout<<sizeof(string)<<endl;
	cout<<sizeof(vihicle)<<endl;
	cout<<sizeof(vihicle[40][23])<<endl;
	cout<<sizeof(vihicle[1])<<endl;
	
	for(int i=0;i<sizeof(vihicle)/sizeof(vihicle[0]);i++){
		for(int j=0;j<sizeof(vihicle[0])/sizeof(string);j++){
			cout<<i<<" - > "<<j <<" "<<vihicle[i][j]<<endl;
		}
	}
// string array[3]={"gvh","guyg","ggf"};
//	cout<<sizeof(array)<<endl;
 	
}
