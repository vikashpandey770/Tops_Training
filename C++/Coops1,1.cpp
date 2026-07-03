#include<iostream>
using namespace std;


class Student{
	
	private:
		int marks;
		string name;
		
		public:
			void putdata(){
				
				cout<<"enter your name:";
				cin>>name;
				cout<<"enter your marks:";
				cin>>marks;
			}
			void getdata(){
				cout<<"\nname:"<<name;
				cout<<"\nmarks:"<<marks;
			}
			
};

int main(){
	
	Student vikash;
	vikash.putdata();
	vikash.getdata();
	
	
	return 0;
}
