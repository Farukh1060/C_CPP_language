#include<iostream>
//8. Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation
using namespace std;
class Address{
	public:
	string country,state,city;
	int pincode;
	
	public:
		Address(string cntry,string s,string c,int pin){
		this->country=cntry;
		this->state=s;
		this->city=c;
		this->pincode=pin;
		}
};
class student{
	private:                                   
	string name;
	int clas,roll_no;
	int marks;
	
	Address* address; 
		public:
			student(string n, int c,int r_no,int mrk,Address* address){
				this->name=n;
				this->clas=c;
				this->roll_no=r_no;
				this->marks=mrk;
				this->address=address;
			}
			char stud_grad(){
				if(marks>=90){
					return 'A';
				}else if(marks>=80){
					return 'B';	
				}else if(marks>=70){
					return 'C';	
				}else if(marks>=60){
					return 'D';	
				}else{
					return 'F';
				}
			}
		void stud_imfo(){
			cout<<"name:"<<name<<endl<<"class:"<<clas<<endl<<"roll_no:"<<
			roll_no<<endl<<"marks:"<<marks<<endl<<"grade:"<<stud_grad()<<
			endl<<"address:"<<address->country<<","<<address->state<<","<<address->city<<","<<address->pincode<<endl;
		}
		
};

int main(){
	Address add= Address("india","gujrat","surat",394225);
	student s("far",12,25,90,&add);
	
	Address add1= Address("india","maharastra","mumbai",394225);
	student s1("farukh",9,16,50,&add1);
	
	s.stud_imfo();
	s1.stud_imfo();
	
	Address address("india","guj","surat",394222);
	
	

	
} 
