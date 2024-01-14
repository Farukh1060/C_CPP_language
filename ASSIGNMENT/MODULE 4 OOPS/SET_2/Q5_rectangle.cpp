#include<iostream>
#include<cmath>
//5. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
using namespace std;
class rectangle{
	private:
	float  length,width;
	public:
		void area(float l ,float w){
			length =l;
			width=w;
		cout<<"area of rectangle: "<<length * width<<endl;

		}
		void  perimeter(float length ,float width){
		cout<<"perimeter of rectangle: "<<2*(length + width)<<endl;

		}
};
int main(){
	rectangle r;
	
	r.area(18,19);
	r.perimeter(14.5,15.25);
	return 0;
		
}
