#include<iostream>
//5. Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.
using namespace std;
class triangle{
	private:
		double length1;
		double  length2;
		double  length3;
		
		public:
			triangle(double  l1,double  l2,double l3){
				length1=l1;
				length2=l2;
				length3=l3;
			}

		void shape(){
				
				if(length1==length2&&length1==length3){
					cout<<"equilateral triangle";
				}else if(length1==length2||length1==length3||length2==length3){
						cout<<"isosceles triangle";
				}else{
					cout<<"scalene triangle";
				}
				
			}			
};
int main(){
	triangle t(20,10,50);
	t.shape();
	return 0;
}
