#include<iostream>
using namespace std;
int main(){
    int num,palindrom_no,sum=0,revers_no;
    int i=0;      //positin in array to store vale
    int digit[i]={};
    
    cout<<"enter number to check palindrom_no : ";
    cin>>num;
   palindrom_no =num;
   while(num !=0){
        // cout<<i<<endl;
       revers_no=num%10;
       num=num/10; 
       digit[i]=revers_no; 
       i++;
       cout<<revers_no<<endl;
    } 
// cout<<i;
for(int j=0;j<i;j++){


}
//  cout<<sum; 
//  cout<<armstrong_no;  
if(palindrom_no==digit){
	cout<<"number is a palindrom_no";
}else{
	cout<<"number is not a palindrom_no";
}
         
}
