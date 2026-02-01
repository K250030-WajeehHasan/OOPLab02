#include<iostream>
using namespace std;

class Car{
private: 
	int speed;
	
public:
	void setSpeed(int s){
		if(s>=0 && s<=200){
			speed = s;
		}
		else{
			speed = 0;
		}
	}
	int getSpeed(){
		return speed;
	}	
};

int main(){
	Car c1;
	c1.setSpeed(140);
	cout<<"Car speed is "<<c1.getSpeed()<<"km/h"<<endl;
	return 0;
}
