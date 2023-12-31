#include<iostream>
using namespace std;
int main(){
    int num,revers_no;
    cout<<"enter number to revers: ";
    cin>>num;

         for(int i=0;i<12;i++){
            revers_no=num%10;
            num= num/10;
            cout<<revers_no;
            if(num==0){
                break;

            }else{
                continue;
            }
         }
}