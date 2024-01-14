#include<iostream>
//1. Write a program of to swap the two values using template

using namespace std;

	template <typename F>
	F swap1(F& a,F& b) {
  			F temp = a;
			 a = b;
			 b = temp;
//			 cout<<a<<endl<<b<<endl;
	}
	
int main(){

	int x = 5;
	int y = 8;

	cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
	swap1( x,  y);
	cout<<"x = "<<x<<endl<<"y = "<<y<<endl;

return 0;
}
