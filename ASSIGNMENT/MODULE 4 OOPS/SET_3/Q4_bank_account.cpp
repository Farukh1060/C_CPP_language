#include<iostream>
//4. Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.
using namespace std;
class bank_account{
 private:
     float account_number;
     float balance;
 public:
 bank_account(float acc_num,float bal){
    account_number=acc_num;
    balance=bal;
 }
    void deposit(float amount){
        balance+=amount;
    }

    void withdraw(float amount){

        if(balance<=0 &&balance<amount){
              cout<<"low balance";
             
            
        }
        else if(balance>0 && balance>=amount){
          
         balance-=amount;
        cout<<"withdraw amount: "<<amount<<endl;
        
        }else{
            cout<<"low balance"<<endl;
           
        }
        
    }
   float getbalance(){
   	cout<<"account balance: ";
   	return balance;
	}


};
int main(){
    bank_account b(1060,200);
    b.withdraw(150);
    b.withdraw(40);
    cout<<b.getbalance();
}
