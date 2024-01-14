#include<iostream>
//11.Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area
using namespace std;
class shap{
	private:
		int length ,breath,radies;
	public:
    	int area(int l ,int b){
			length = l;
			breath = b;
			cout<<"area of rectangle is: ";
			cout<< l*b<<endl;
			
		}
		double area(int r){
			radies = r;
			cout<<"area of circle is: ";
			cout<< 3.145 *r*r<<endl;
			
		}
		double area(double l ,double b){
			length = l;
			breath = b;
			cout<<"area of triangle is: ";
			cout<< 0.5*l*b<<endl;
			
		}
		
};


int main(){
	
	shap s;
	s.area(2,5);
	s.area(5);
	s.area(2.5,5.5);
return 0;	
}
