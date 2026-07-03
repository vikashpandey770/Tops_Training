#include<iostream>
using namespace std;

class Sbi{
	
	private :
		
		string name1,name2;
		float amount;
	float balance;
	
		public :
			void diposite(){
				cout<<"enter your name:";
			//	cin>>name;
			getline(cin,name1);
				cout<<"enter your add amount:";
				cin>>amount;
				if(amount>0){
					balance+=amount;
					cout<<"your total balance is:"<<balance<<endl;	
				}
				else if(amount<0){
					cout<<"invalid value"<<endl;
				}
			}
	
	
			void withdraw(){
				cout<<"enter your withdraw amount:";
				cin>>amount;
				if(amount>0){
					balance-=amount;
					cout<<"your total clear balance is:"<<balance<<endl;
				}
				else{
					cout<<"not availabel";
					// condition ki value minus me ho to program ange run na ho.
				}	
			}
			
			void checkbalance(){
				cout<<"enter your name for balance inquiry:"<<endl;
				cin>>name2;
			if(name1==name2){
				cout<<"your clear balance is:"<<balance;
			}
			
				else{
					cout<<"other person account not show your balance";
				}
			
		}
};

int main(){
	
	Sbi banking;
	banking.diposite();
	banking.withdraw();
	banking.checkbalance();
	
	return 0;
}
