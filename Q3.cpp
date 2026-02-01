#include<iostream>
using namespace std;

class Student{
private: 
	int rollNumber;
	float cgpa;
	
public: 
	void setData(int r, float c){
		rollNumber = r;
		cgpa = c;
	}	
	void displayData(){
		cout<<"Roll Number: "<<rollNumber<<endl;
		cout<<"CGPA: "<<cgpa<<endl;
	}
};

int main(){
	Student s1, s2;
	s1.setData(1000, 3.8);
	s1.displayData();
	cout<<"\n";
	s2.setData(1001, 3.6);
	s2.displayData();
	return 0;
}
