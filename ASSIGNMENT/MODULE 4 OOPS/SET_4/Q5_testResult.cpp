#include<iostream>
//5. Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)

using namespace std;

	class student{
		
		protected:	
	   	int roll_no;
	   	
		public:
	    void read_stud_info(){
	    	cout<<"enter roll_no: ";
	    	cin>>roll_no;
		}
		
		void display_stud_info(){
			cout<<"roll_ no: "<<roll_no<<endl;
		}
	};
	
	class text:public student{
		protected:
		int physic;
		int maths;
		
		public:
			
		  void read_text_info(){
//		  	 read_stud_info();
	    	cout<<"enter physic marks: ";
	    	cin>>physic;
	    	cout<<"enter maths marks: ";
	    	cin>>maths;
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
		result r;
		r.read_stud_info();
		r.read_text_info();
		r.calcu_total_marks();
		
		r.display_result_info();
		
		return 0;
}
