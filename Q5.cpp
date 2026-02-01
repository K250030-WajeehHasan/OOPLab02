#include<iostream>
using namespace std;

struct EmployeeStruct{
	int ID;
	float Salary;
};

class EmployeeClass{
private: 
	int ID;
	float Salary;
	
public: 
	void setData(int i, float s){
		ID = i;
		Salary = s;
	}
	int getID(){
		return ID;
	}
	float getSalary(){
		return Salary;
	}
};

int main(){
	EmployeeStruct s1;
	s1.ID = 1000;
	s1.Salary = 50000;
	cout<<"The EmployeeStruct ID is "<<s1.ID<<endl;
	cout<<"The EmployeeStruct Salary is "<<s1.Salary<<endl;
	EmployeeClass c1;
	c1.setData(1001, 80000);
	cout<<"The EmployeeClass ID is "<<c1.getID()<<endl;
	cout<<"The EmployeeClass Salary is "<<c1.getSalary()<<endl;
	return 0;
}
