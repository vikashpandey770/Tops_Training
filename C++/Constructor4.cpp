#include<iostream>
#include<string.h>

using namespace std;

class Student{
	
	private:
		int roll;
		char name[30];
		
		public:
		// default constructor.
			Student(){
				cout<<"enter a roll no:";
				cin>>roll;
				
				cout<<"enter a name:";
				cin>>name;
	
			}
			
			// parameter constructor.
			Student(int r, const char nm[30]){
				
				roll=r;
				strcpy(name,nm);
			}
			void printdata(){
				
				cout<<"your roll no is:"<<roll<<endl;
				cout<<"your name is:"<<name<<endl;
			}
};


int main(){
	
	// default constructor
	
	Student ss;
	ss.printdata();
	
	// paramerize 
	Student s(1,"pandey");
	s.printdata();
	Student s1(2,"vikash");
	s1.printdata();
	
	Student s2(3,"shrinivas");
	s2.printdata();
	
	
	
	return 0;
}
