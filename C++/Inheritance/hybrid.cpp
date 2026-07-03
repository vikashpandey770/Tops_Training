#include<iostream>
#include<string.h>

using namespace std;
class A{
	public:
		void car(){
			cout<<"car speed 120"<<endl;
		}
};
class B{
	public:
		void bike(){
			cout<<"bike speed 60"<<endl;
		}
};
class C:public B,public A{
	public:
		void cycle(){
			cout<<"cycle speed 15"<<endl;
		}
};


// multi-ple
class D: public C{
	public:
		void sum(){
			cout<<"total value all classes"<<endl;
		}
};
class E : public {
	void show(){
		printf("Hellow");
	}
};

int main(){
	
//		C ad;
		
//	ad.cycle();
//	ad.bike();	
//	ad.car();
//	cout<<"-------------this is is a hybrid mode program ---------------"<<endl;	
//	
	D hybrid;
	hybrid.car();
	hybrid.bike();
	hybrid.sum();
	
	
	return 0;
}
