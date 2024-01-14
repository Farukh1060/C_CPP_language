#include<iostream>
//4. Write a C++ Program display Student Mark sheet using Multiple inheritance//
using namespace std;

	
	class student_detail{
			protected:
		string name;
		int roll_no;
		int stander;
		public:
		student_detail(string n,int r_no,int std ){
			name=n;
			roll_no=r_no;
			stander=std;
		}
		
		
		
	};
	
	class student_marks{
		protected:
		int physic;
		int chemistry;
		int maths;
		public:
			student_marks(int phy,int chem,int mts){
				physic =phy;
				chemistry =chem;
				maths=mts;
				
			}

	};
	
		class marksheet:public student_detail,public student_marks{
			public:
 				marksheet(string n,int r_no,int std ,int phy,int chem,int mts):student_detail(n,r_no,std ),student_marks(phy,chem,mts){
 						name=n;
		 				roll_no=r_no;
						stander=std;
						physic =phy;
						chemistry =chem;
						maths=mts;
				 }
				 void display_marksheet(){
				 	cout<<"student name: "<<name<<endl<<"roll_no: "<<roll_no<<endl<<"stander: "<<stander<<endl;
				 	cout<<"physic: "<<physic<<endl<<"chemestry: "<<chemistry<<endl<<"maths: "<<maths<<endl;
				 	
				 }
			
	};

int main(){
	marksheet m("farukh",16,9,85,75,95);
	m.display_marksheet();

	
	
	

return 0;
}
