#include<iostream>
using namespace std;
class num {
	private:
		int value;
	public:
	 	num(int val){
	 		value=val;	
		 }	
	
	num operator+(num n){
		return num(value+n.value);
	}	 
	
	int getvalue(){
		return value;
	}
};

int main(){
	num n1(5);
	num n2(7);
	num sum = n1 + n2;
	cout<<sum.getvalue();
}
