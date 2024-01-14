#include<iostream>
//6. Write a C++ Program to show access to Private Public and Protected using
//Inheritance
using namespace std;
	class pubic{

		private:
		 	int age;
		protected:
	    	int	password;
	    
	   	public:
			string name;
			
		void setage(int a){
			age=a;	
		}
		
		int getage(){
			cout<<"private data age: "<<age<<endl;
		}
			
	};

	class protect:public pubic{
	public:
		void setdata(int p){
//			age=a;  accesing this get an error
			password=p;	
		}
		
		int getdata(){
			cout<<"protected data password: "<<password<<endl;
		}
	
	};

	int main(){
		protect p;
		pubic plc;
//		public varaible;
		p.name = "far";
		cout<<"public data name: "<<p.name<<endl;
		
//	private can not access out side of class,
//protected can access in inherent class also
//public can access anywere 
	
	//protected
	
		p.setdata(1234);
		
    	p.getdata();
    
	//private
	  	
		 plc.setage(26);
		 plc.getage(); 
		 
		 return 0;	
				
	}



