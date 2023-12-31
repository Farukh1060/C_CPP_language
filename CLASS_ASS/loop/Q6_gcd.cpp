#include<iostream>
using namespace std;
int main(){
  int num1,num2,divisor,gcd=1,j=0,k=0;  // j ,k are position in array to store vale

  cout<<"enter num1: ";
  cin>>num1;
  cout<<"enter num2: ";
  cin>>num2;

  int factors1[10]={},factors2[10]={}; //doubt

   cout<<"factors of "<<num1<<endl;
 for(divisor=2;divisor<=num1;divisor++){

   do{
   
         if(num1%divisor==0){

      
        factors1[j]=divisor;
        num1=num1/divisor;
        // cout<<num1<<endl;
        cout<<factors1[j]<<endl;
        j++;
    }
   }while(num1%divisor==0);
  //  cout<<num2;
 }


  cout<<"factors of "<<num2<<endl;
 for(divisor=2;divisor<=num2;divisor++){
   do{
    
    
         if(num2%divisor==0){
        // cout<<i<<" ";
        factors2[k]=divisor;
        num2=num2/divisor;
        // cout<<num2<<endl;
        cout<<factors2[k]<<endl;
        k++;
    }
   }while(num2%divisor==0);
   
 }

 //gcd
 divisor=0;
 j=0;
 k=0;

for(k=0;k<=sizeof(factors1)/sizeof(int);k++){
  
    if(factors1[divisor]==factors2[j]){
        gcd= gcd*factors1[divisor];
        divisor++;
        j++; 
        if(factors1[divisor]=='\0'&&factors2[j]=='\0'){
            break;
        }
    }else if(factors1[divisor]>factors2[j]){
      j++;
    }else if(factors1[divisor]<factors2[j]){
      divisor++;
    }
    // cout<<"gcd = "<<gcd<<endl;
}
cout<<"gcd = "<<gcd<<endl;
}
