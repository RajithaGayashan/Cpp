
#include<iostream>
using namespace std;
int main(){
	const int x=10;
	//x++; -compile time error

}
const int m1(){
	return 0;
}

void m2(const int y){
	//y++  -error
}


