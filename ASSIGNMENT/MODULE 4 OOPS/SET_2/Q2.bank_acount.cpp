#include<iostream>
/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
using namespace std;
class bank_account{
private:
 string depositer_name;
 string ty_of_account;
 		double account_number;
		double account_balance;
public:
        bank_account(string dp_name,  string ty_of_acc  ,double acc_bal, double acc_no){
				 depositer_name=dp_name;
			     ty_of_account=ty_of_acc;
				 account_balance=acc_bal;
			     account_number=acc_no;	
        }
        void deposit(double amount){
				account_balance+=amount;
			}
			
			void withdraw(double amount){
				if(account_balance<=0){
					cout<<"account balance is less than withdraw amount"<<endl;
					cout<<"account_balance: "<<account_balance;
				}else if(account_balance>0&&account_balance>amount){
					account_balance-=amount;
				}else{
					cout<<"account balance is less than withdraw amount"<<endl;
//					cout<<"account_balance: "<<account_balance;
				}
					
			}
			double getbalance(){
				cout<<"depositer_name: "<<depositer_name<<" ";
				cout<<"account balance: ";
				return account_balance;
			}
};
int main(){
	
		bank_account bnk_acc("farukh","saving",1000,1060);
//		cout<<b.depositer_name<<endl<<b.ty_of_account<<endl<<b.account_balance;
//			bank_account bnk_acc(1060,1000);
	bnk_acc.deposit(500);
	cout<<bnk_acc.getbalance()<<endl;
	bnk_acc.withdraw(1400);
	cout<<bnk_acc.getbalance()<<endl;
	bnk_acc.withdraw(90);
	cout<<bnk_acc.getbalance()<<endl;
	bnk_acc.withdraw(90);
	cout<<bnk_acc.getbalance()<<endl;
		
}
