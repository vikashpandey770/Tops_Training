#include<iostream>
#include<string.h>

using namespace std;

	string capital;
	
class A{
	
	public:
		
		void gujarat(){
		cout<<"gujarat capital :";
		getline(cin,capital);
		
		cout<<"---------ANSWER--------"<<endl;
	//	cin>>capital;
		cout<<"gujarat capital is:"<<capital<<endl;
		}
};

class B{
	public:
		void maharastra(){
			cout<<"maharastra capital:";
			getline(cin, capital);
				cout<<"---------ANSWER--------"<<endl;
			cout<<"maharastra capital is:"<<capital<<endl;
		}
	
};

class C:public A, public B{
	public :
		void india(){
			cout<<"india capital : delhi"<<endl;
		}
};
int main(){
	
	C is;
	is.india();
	is.gujarat();
	is.maharastra();
	cout<<"enter your state capital:";
	cin>>capital;
	cout<<"your state capital is:"<<capital;
	return 0;
}
