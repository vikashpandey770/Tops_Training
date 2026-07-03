#include<iostream>

using namespace std;

class Hdfc{
	private:
		float dipositeAmount;
		float amount;
		float withdrawAmount;
		string name;	
	
	public:
		void start(){
			
			cout<<"Enter Your name:";
			getline(cin,name);
			cout<<"Enter Your amount:";
			cin>>amount;
		}
			
		void addmoney(){
			cout<<"Enter a diposite amount value:";
			cin>>(dipositeAmount);
			
			
			
		}
		
		void withd(){
			cout<<"Enter a withdraw amount:";
			cin>>(withdrawAmount);
		}
};
int main(){
	
	Hdfc add;
	add.start();
	
	Hdfc dip;
	dip.addmoney();	
	
	Hdfc wit;
	wit.withd();
	return 0;
}
