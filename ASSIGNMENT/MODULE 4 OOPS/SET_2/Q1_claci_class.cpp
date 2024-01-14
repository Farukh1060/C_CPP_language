#include<iostream>
//1. WAP to create simple calculator using class
using namespace std;
class calci{
public:
double num1,num2;
    double add(double num1,double num2){
        return num1+num2;
    }
    double sub(double num1,double num2){
        return num1-num2;
    }
    double multi(double num1,double num2){
        return num1*num2;
    }
    double div(double num1,double num2){
        return num1/num2;
    }

};
int main(){
calci c;

// cout<<c.add(2,5);
// cout<<c.sub(2,5);
cout<<c.div(2,5);


    return 0;
} 
