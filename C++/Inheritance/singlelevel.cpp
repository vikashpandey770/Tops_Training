#include<iostream>
#include<string.h>

using namespace std;

class dog{
	public:
		void run(){
			cout<<"dog is runnig fast"<<endl;
		}
};
class cat:public dog{
	
	public:
		void song(){
			cout<<"cat is singing now";
		}
};

int main(){
	cat f;
	f.run();
	f.song();
	
	
	return 0;
}
