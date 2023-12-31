#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,armstrong_no,sum=0,count;
    int i=0;      //positin in array to store vale
    int digit[i]={};
    
    cout<<"enter number to check armstrong_no : ";
    cin>>num;
    armstrong_no =num;
   while(num !=0){
        // cout<<i<<endl;
       count=num%10;
       num=num/10; 
       digit[i]=count; 
       i++;
//       cout<<count;
    } 
// cout<<i;
for(int j=0;j<i;j++){
    // cout<<digit[1]; 
sum=sum+pow(digit[j],i);
}
//  cout<<sum; 
//  cout<<armstrong_no;  
if(armstrong_no==sum){
	cout<<"number is an armstrong_no";
}else{
	cout<<"number is not an armstrong_no";
}


}
