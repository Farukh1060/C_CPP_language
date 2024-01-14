#include<iostream>
//12.Write a program to swap the two numbers using friend function
//without using third variable
using namespace std;
class number{
	private:
		
	int num1;
	int num2;
	
	friend void swap_no(number &obj);
	public:
		number(int n1, int n2){
			num1 = n1;
			num2 = n2;
		}
	void display(){
		cout<<"num1 : "<<num1<<endl<<"num2 : "<<num2<<endl;
		}
		
};

void swap_no(number &obj){
	obj.num1 = obj.num1+obj.num2;
	obj.num2 = obj.num1-obj.num2;
	obj.num1= obj.num1- obj.num2;

	  cout<<"num1 : "<<obj.num1<<endl<<"num2 : "<<obj.num2<<endl;
}


int main(){
	number n(5,6);
	n.display();
	swap_no(n);

	return 0;
}
