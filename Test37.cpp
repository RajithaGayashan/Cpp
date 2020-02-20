#include<iostream>
using namespace std;
class Plane{
	private:
		int speed;
		
	public:
		void changeSpeed();
		int getSpeed();

	
};
int Plane::getSpeed(){
	return speed;
}
int main(){
	Plane p;
	int spd=p.getSpeed();
	cout<<spd<<endl;
}

