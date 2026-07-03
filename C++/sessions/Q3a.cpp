#include<iostream>
#include<string.h>
 using namespace std;
int main(){	
float basePrice;
float finalPrice;
float gstRate;
float gst;
	
	cout<<"enter your base price:";
	cin>>basePrice;	
	cout<<"enter your gst rate:";
	cin>>gstRate;
	cout<<"your base price is:"<<basePrice<<endl;
	cout<<"your gst price is:"<<gstRate<<endl;	
	gst=(basePrice*gstRate)/100;
	finalPrice=(basePrice+gst);
	cout<<"your final price is:"<<finalPrice;
	return 0;
}
