#include<iostream>
//8. Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
using namespace std;
class calci{
	public:
		int add(int a ,int b){
		return a+b;
    	}
    	double add(double a ,double b){
		return a+b;
    	}
    	
    	int sub(int a ,int b){
		return a-b;
    	}
    	double sub(double a ,double b){
		return a-b;
    	}
    	
    	int mul(int a ,int b){
		return a*b;
    	}
    	double mul(double a ,double b){
		return a*b;
    	}
    	
    		int div(int a ,int b){
		return a/b;
    	}
    	double div(double a ,double b){
		return a/b;
    	}	
};


	
int main(){
	calci c;
	
	cout<<c.add(2,5)<<endl;
	cout<<c.add(2.5,5.5)<<endl;
	
	cout<<c.sub(2,5)<<endl;
	cout<<c.sub(8.3,5.5)<<endl;     //function will overload accroding to parameter
	return 0;
}
