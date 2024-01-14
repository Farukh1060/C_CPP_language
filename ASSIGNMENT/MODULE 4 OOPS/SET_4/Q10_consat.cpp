#include<iostream>
//10.Write a program to concatenate the two strings using Operator Overloading
using namespace std;
class concat_name{
	private:
		string name;
	public:
	 	concat_name(string n){
	 		name=n;	
		 }	
	
	concat_name operator+(concat_name nam){
         name+=nam.name;
		 return name;
	}	 
	
	string getname(){
		return name;
	}
	
};

int main(){
	concat_name cn1("farukh");
	concat_name cn2(" shaikh");
	cn1= cn1+cn2;
		cout<<cn1.getname();
	
	
	
	
	return 0;
}

