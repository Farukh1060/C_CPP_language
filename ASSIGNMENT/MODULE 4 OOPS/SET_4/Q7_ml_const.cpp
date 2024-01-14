#include<iostream>
//7. Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance
using namespace std;

	
	class student{
		
		protected:	
	   	int roll_no;
	   	
		public:
			student(int r_no){
				roll_no=r_no;
			}
//	    void read_stud_info(){
//	    	cout<<"enter roll_no: ";
//	    	cin>>roll_no;
//		}
		
		void display_stud_info(){
			cout<<"roll_ no: "<<roll_no<<endl;
		}
	};
	
	class text:public student{
		protected:
		int physic;
		int maths;
		
		public:
			text(int phy,int mts,int r_no):student(r_no){
				physic = phy;
				maths = mts;
				roll_no=r_no;
			}
			

		
		void display_text_info(){
			display_stud_info();
			cout<<"physic marks: "<<physic<<endl<<"maths marks: "<<maths<<endl;
		}
	};
	
  	class result:public text{
		protected:
		int total_marks;
			public:
				
				result(int phy,int mts,int r_no):text(phy,mts,r_no){
				physic = phy;
				maths = mts;
				roll_no=r_no;
			}
				
			void calcu_total_marks(){
					total_marks= physic + maths;
				}
				
		void display_result_info(){
			calcu_total_marks();
			display_text_info();
			cout<<"total_marks: "<<total_marks<<endl;
		}

	};

   	int main(){
//   		text t(26,56,1);
//   		t.display_text_info();

			result r(26,56,16);
			r.display_result_info();
	return 0;
}
