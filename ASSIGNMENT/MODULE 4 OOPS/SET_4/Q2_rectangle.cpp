#include<iostream>
//2. Write a C++ Program to find Area of Rectangle using inheritance
using namespace std;
class rectangle{
  public:
    double length;
    double breath;
    double area;
    
    rectangle(double l,double b){
        length=l;
        breath=b;
    }
};

class rect_area : public rectangle {
    public:
		rect_area(double l,double b):rectangle( l,b){
		 length=l;
        breath=b;
		}
       double area(){
                return length * breath;
        }
};

int main(){
//    rectangle r(10,20);
//    cout<<r.length;
    rect_area ra(30,20);
    cout<<ra.area();
	return 0;
}
