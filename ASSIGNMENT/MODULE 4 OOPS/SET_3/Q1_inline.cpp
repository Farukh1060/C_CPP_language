#include<iostream>
//1. Write a program to find the multiplication values and the cubic values using
//inline function
using namespace std;
class calci{
     public:
     	float num1;
     	float num2;
     	
        inline float multiply(float num1,float num2){
     		return num1 * num2;
		 }
    	inline float cubic(float num1){
		 	 return	num1*num1*num1;
		 }

};
int main(){
    calci c;
   cout<< c.cubic(2)<<endl;
   cout<< c.multiply(5,8);

    
    return 0;
}
