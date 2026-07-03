#include<iostream>
#include<string.h>

using namespace std;
class Big{
	private:
		int salary=10000;
	public :
	friend	class Small;
};

class Small:public Big{
	public:
		void run(Big b){
			cout<<"enter small salary:"<<b.salary;
		}
};
int main(){
	Big b1;
	Small ob;
	ob.run(b1);
	return 0;
}
