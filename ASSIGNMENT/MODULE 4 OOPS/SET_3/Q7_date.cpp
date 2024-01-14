#include<iostream>
//7. Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid
using namespace std;
class date{
	private:
	int day;
	int month;
	int year;

		public:
			void setday(int d){
				if(d>0&&d<=31){
					day=d;
				}else{
						day=d;
					cout<<"day input is wrong"<<endl;
				}
				
			}
			void setmonth(int m){
				if(m>0&&m<=12){
					month=m;
				}else{
						month=m;
					cout<<"month input is wrong "<<endl;
				}
				
			}
			void setyear(int y){
					if(y>0){
					year=y;
				}else{
					year=y;
					cout<<"year inputm is wrong"<<endl;
				}
				
			}
			
			int getdate(int &d,int &m,int &y){
				d=day;
				m=month;
				y=year;
			}
//			int getday(){
//				return day;
//			}
//			int getmonth(){
//				return month;
//			}
//			int getyear(){
//				return year;
//			}
};
int main(){
	 date d;
	 d.setday(35);
	 d.setmonth(15);
	 d.setyear(1997);
	 int day ,month ,year;
	 d.getdate(day,month,year);
	 cout<<day<<"/"<<month<<"/"<<year;
	 
	 
	 
}
