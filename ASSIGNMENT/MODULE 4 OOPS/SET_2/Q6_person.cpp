#include<iostream>
//6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
using namespace std;
class person{
	private:
	string  name,country;
	int  age;
	public:
	// string nme(string name){
	// 	return name;
	// }
	 void setname(string n){
		name=n;
	 }
	 void setcountry(string c){
		country=c;
	 }
	 void setage(int a){
		age=a;
	 }

	 string getname(){
		return name;
	 }
	 string getcountry(){
		return country;
	 }
	 int getage(){
		return age;
	 }
		
};
int main(){
	person p;
	// cout<<p.nme("farukh");
	p.setname("farukh");
	p.setage(25);
	p.setcountry("india");
	cout<<p.getname()<<endl;
	cout<<p.getage()<<endl;
	cout<<p.getcountry()<<endl;
	
	return 0;
		
}
