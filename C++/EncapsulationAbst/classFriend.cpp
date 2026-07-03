#include<iostream>
#include<string.h>

using namespace std;

class Ajit{
	private :
		int money=500;
	public:
	friend	class Nimesh;
};

class Nimesh :public Ajit{
	public :
		void show(Ajit a){
			cout<<"nimesh money"<<a.money;
		}
		
		};
int main(){
	
	Ajit a1;
	Nimesh on;
	on.show(a1);
	
	return 0;
}
