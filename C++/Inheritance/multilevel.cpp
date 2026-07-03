#include<iostream>
#include<string.h>

using namespace std;
class vehicle{
	public:
		void car(){
			cout<<"car ia a light weight vehicle"<<endl;
		}
};
class electric:public vehicle {	
public:
	void elecar(){
		cout<<"this is a battery car"<<endl;
	}
};

class gasvehicle :public electric{
public:
	void gascar(){
	cout<<"this is a cng car";	
	}
};

int main(){
	
	gasvehicle g;
	g.car();
	g.elecar();
	g.gascar();
	return 0;
}
