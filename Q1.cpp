#include<iostream>
using namespace std;

class Radio{
private: 
	int volume;
	float frequency;
	
public: 
	void setFrequency(int f){
		frequency = f;
	}	
	void setVolume(int v){
		volume = v;
	}
	void displayStatus(){
		cout<<"Frequency: "<<frequency<<endl;
		cout<<"Volume: "<<volume<<endl;
	}
};

int main(){
	Radio r1, r2;
	r1.setFrequency(150);
	r1.setVolume(60);
	r2.setFrequency(200);
	r2.setVolume(80);
	cout<<"\nStatus 1: "<<endl;
	r1.displayStatus();
	cout<<"\nStatus 2: "<<endl;
	r2.displayStatus();
	return 0;
}
