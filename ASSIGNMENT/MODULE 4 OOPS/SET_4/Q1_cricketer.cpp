#include<iostream>
//1. Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)

using namespace std;
class Cricketer{
	public:
		string playerName;
		int age;
		// Cricketer(string pn,int a){
		// 	playerName=pn;
		// 	age=a;
		// }
		
};

class batsman: public Cricketer {
	public:
		int total_run;
		double average_run;
		int best_performation;
		batsman(string pn,int a) {
			playerName=pn;
			age=a;
		}
		
		void inputData(int run,int best){
			total_run=run;
			best_performation =best;	
		}
		double averageRun(int matchPlay){
			average_run= total_run/matchPlay;
			return average_run;
		}
		void displayData(){
			cout<<playerName<<endl<<age<<endl;
			cout<<total_run<<endl<<best_performation<<endl<<average_run;
		}
	
};
int main(){
	batsman b("farukh",26);
	b.inputData(850,130);
	b.averageRun(30);
	b.displayData();
	return 0;
}
