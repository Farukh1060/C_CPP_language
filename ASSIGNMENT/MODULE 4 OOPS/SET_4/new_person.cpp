#include<iostream>
using namespace std;
	class person{
		protected:
		string name;
		int age;
		public:
			person(string n,int a){
				name=n;
				age=a;
			}
			void display(){
				cout<<"name: "<<name<<endl<<"age: "<<age<<endl;
			}
		
	};
	
	class student: public person{
			protected:
		double presentage;
		public:
		student(double p,string n,int a):person(n,a){
			presentage=p;
				name=n;
				age=a;
		}
			void display(){
				cout<<"student name: "<<name<<endl<<"age: "<<age<<endl<<"perecentage: "<<presentage<<endl;
			}
		
		
	};
	
	class teacher:public person{
			protected:
		double salary;
		public:
		teacher(double s,string n,int a):person(n,a){
			salary =s;
			name=n;
			age=a;
			
		}
		void display(){
				cout<<"teacher name: "<<name<<endl<<"age: "<<age<<endl<<"salary: "<<salary<<endl;
			}
	};

int main(){
	teacher t(2000,"farukh",26);
	t.display();
	student s(65,"farukh",26);
	s.display();

}
