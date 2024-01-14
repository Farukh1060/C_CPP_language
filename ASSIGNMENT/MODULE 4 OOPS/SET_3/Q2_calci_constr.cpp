#include<iostream>
//2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor.
using namespace std;
class calci{
public:
double num1,num2;
    
    calci(double n1,double n2){
        num1=n1;
        num2=n2;
    }
    double add(){
        return num1+num2;
    }
    double sub(){
        return num1-num2;
    }
    double multi(){
        return num1*num2;
    }
    double div(){
        if(num2==0){
            cout<<"infinit error";
        }
             return num1/num2;
       
    }

};
int main(){
    calci c(10,0);
    cout<<c.add()<<endl;
    cout<<c.sub()<<endl;
    cout<<c.div()<<endl;
    return 0;
}
