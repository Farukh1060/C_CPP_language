#include<iostream>
//3. Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)

using namespace std;

	
	class student{
			protected:
		double presentage;
		public:
		double stud_per(double p){
			presentage=p;
			return presentage;
		}
			void sdisplay(){
				cout<<"perecentage: "<<presentage<<endl;
			}
		
		
	};
	
	class teacher{
			protected:
		double salary;
		public:
		double teac_sal(double s){
			salary =s;
			return salary ;
			
		}
		void tdisplay(){
				cout<<"salary: "<<salary<<endl;
			}
	};
	
		class person:public student,public teacher{
		protected:
		string name;
		int age;
		public:
			person(string n,int a){
				name=n;
				age=a;
			
			}
			void ptdisplay(){
				cout<<"teacher name: "<<name<<endl<<"age: "<<age<<endl<<"salary: "<<salary<<endl;

			}
			void psdisplay(){

				cout<<"student name: "<<name<<endl<<"age: "<<age<<endl<<"perecentage: "<<presentage<<endl;
			}
		
	};

int main(){
	person p("farukh",16);
	p.stud_per(65);
	p.psdisplay();
	person p1("shaikh",25);
	p1.teac_sal(5000);
	p1.ptdisplay();
	p.psdisplay();
	
	
	
return 0;

}
