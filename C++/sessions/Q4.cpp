#include<iostream>
#include<string.h>

using namespace std;

int main(){
	string spotify_playlist;
	int totalNumberOfSong;
	float average_song_duration;
	
	cout<<"enter your playlist:";
	cin>>spotify_playlist;
	
	cout<<"enter no of songs:";
	cin>>totalNumberOfSong;
	
	cout<<"enter average time song duration:";
	cin>>average_song_duration;
	
	
	cout<<"your playlist is:"<<spotify_playlist<<endl;
	cout<<"your no of songs is:"<<totalNumberOfSong<<endl;
	cout<<"your average time duration is:"<<average_song_duration;
	return 0;
}
