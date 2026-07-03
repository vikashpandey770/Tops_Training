#include<iostream>
#include<string.h>
 using namespace std;
 int main(){
 int meal;
 cout<<"enter your meal name:";
 cin>>meal;
 cout<<"your meal is:"<<meal<<endl
 ;		
 	switch(meal){
 		
 		case 1:
 			cout<<"breakfast time is morning 6 to 9";
 			break;
 			
 		case 2:
 			cout<<"your lunch time is afternoon 12 pm to 2 pm";
 			break;
 		case 3:
 			cout<<"your dinner time is night 8pm to 11 pm";
 			break;
 			
 		case 4:
 			cout<<"your snacks time is evening time 6pm to 9pm";
 			break;
 			
 		default:
 			cout<<"try some fruits";
	 }
	 return 0;
 }
