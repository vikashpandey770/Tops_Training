#include<iostream>
#include<string.h>

using namespace std;

class Father{
	private:
		int age=32;
	public :
		friend class Child;
};

class Child:public Father{
	public:
		void print(Father f){
			cout<<"child age is:"<<f.age;
		}
};
int main(){
	Father f1;
	Child ob;
	ob.print(f1);
	
	return 0;
}
