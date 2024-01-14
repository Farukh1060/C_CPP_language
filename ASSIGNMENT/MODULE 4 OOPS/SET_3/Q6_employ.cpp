#include<iostream>
//6. Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor
using namespace std;
class employe{
	private:
	string name;
	float employe_id;
	float salary;

		public:
			employe(string n,float emp_id ,float sly){
				name=n;
				employe_id = emp_id;
				salary = sly;
			}
			void setsalary(float performation=1){
				salary *=performation;
			}
			float getsalary(){
				cout<<"salary: ";
				return salary;
			}
			string getname(){
					cout<<"name: ";
				return name;
			}
			float getemploye_id(){
					cout<<"emp_id: ";
				return employe_id;
			}
};
int main(){
	employe e("name",1060,15000);
	cout<<e.getname()<<endl;
	cout<<e.getemploye_id()<<endl;
	cout<<e.getsalary()<<endl;
	e.setsalary(1.05);
	cout<<e.getsalary()<<endl;

	
} 
