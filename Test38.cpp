#include<iostream>
using namespace std;
class Plane{
	private:
		int speed;
		int direction;
		int altitude;
		
	public:
		Plane();
		int getSpeed();
		void changeSpeed(int spd);
		void changeDirection(int dir);
		void changeAltitude(int alt);
		

	protected:
		bool landingGear;
};
Plane::Plane(){
	speed=100;
	direction=90;
	altitude=100;
}
Plane::getSpeed(){
	return speed;
}
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

class FighterPlane:public Plane{
	public:
		void fireMissile();
		void setLandingGears(bool st);
};
void FighterPlane::fireMissile(){
	cout<<"Missile Fired !"<<endl;
}
void FighterPlane::setLandingGears(bool st){
	landingGear=st;
}

class Pilat{
	public:
		void changePlaneSpeed(Plane P,int spd);
		void changePlaneDirection(Plane p,int dir);
		void changePlaneAltitude(Plane p,int alt);
		void fireMissile();
		void setLandingGear(Plane p);
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
	FighterPlane fp;
	fp.fireMissile();
}

int main(){
	Plane p;
	int f=p.getSpeed();
	cout<<f<<endl;
	}
