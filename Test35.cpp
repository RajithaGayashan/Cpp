//Inheritance
#include<iostream>
using namespace std;
class Plane{
	private:
		int speed;
		int direction;
		int altitude;
	
	public:
		void changeSpeed(int spd);
		void changeDirection(int dir);
		void changeAltitude(int alt);	
};
	void Plane::changeSpeed(int spd){
		speed=spd;
		cout<<speed<<endl;
	}
	void Plane::changeDirection(int dir){
		direction=dir;
		cout<<direction<<endl;
	}
	void Plane::changeAltitude(int alt){
		altitude=alt;
		cout<<altitude<<endl;
	}
class FhighterPlane:public Plane{
	public:
		void fireMissile();
};	
class Pilat{
	public:
		void changePlaneSpeed(Plane p,int spd);
		void changePlaneDirection(Plane p,int dir);
		void changePlaneAltitude(Plane p,int alt);
		void fireMissile();
};
	void Pilat::changePlaneSpeed(Plane p,int spd){
		p.changeSpeed(spd);
	}
	void Pilat::changePlaneDirection(Plane p,int dir){
		p.changeDirection(dir);
	}
	void Pilat::changePlaneAltitude(Plane p,int alt){
		p.changeAltitude(alt);
	}
	void Pilat::fireMissile(){
		FhighterPlane fp;
		fp.fireMissile();
	}
	void FhighterPlane::fireMissile(){
		cout<<"Missile fired!"<<endl;
	}
int main(){
	Pilat pl;
	pl.fireMissile();
}	
