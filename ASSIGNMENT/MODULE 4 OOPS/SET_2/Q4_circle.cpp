#include<iostream>
#include<cmath>
//4. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.
using namespace std;
class circle{
	private:
	float radies;
	public:
		void area(float radies){
		cout<<"area of circle: "<<3.14159*pow(radies,2)<<endl;

		}
		void circumference (float radies){
		cout<<"circumference of circle: "<<2*3.14159*radies<<endl;

		}
};
int main(){
	circle c;
	
	c.area(18);
	c.circumference(14);
	return 0;
		
}
