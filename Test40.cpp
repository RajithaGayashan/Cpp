//constractors & distractors
#include<iostream>
using namespace std;
class Cat{
	private:
		bool happy;

	public:
		void speak();
		Cat();
		~Cat();
};
void Cat::speak(){
	if(happy){
		cout<<"Meeoww!"<<endl;
	}else{
		cout<<"ssssss"<<endl;
	}
}
Cat::Cat(){
	cout<<"Cat's Constracor"<<endl;
	happy=true;
}
Cat::~Cat(){
	cout<<"Car's Distractor"<<endl;

}
	

int main(){
	cout<<"Starting program"<<endl;
	Cat c;
	c.speak();	
	cout<<"Ending program"<<endl;
	
}
