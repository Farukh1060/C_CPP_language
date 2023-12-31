#include<iostream>
using namespace std;
int main(){
    int num1,num2,i=2,lcm=1;
    cout<<"enter num1: ";
    cin>>num1;
     cout<<"enter num2: ";
    cin>>num2;

    while (num1>=1 && num2>=1)
    {
      
        if(num1%i==0||num2%i==0){

            //   cout<<i<<endl;
              lcm*=i;

             if(num1%i!=0){
            num1=num1;
           
             }else{
             num1=num1/i;
             }
             if(num2%i!=0){
            num2=num2;
             }else{
             num2=num2/i;
           
             }
        }
        if(num1%i==0||num2%i==0){
            i=i;
        }else{
             i++;
        }if(num1==1&&num2==1){
            break;
        }
    //    break;
    }
    cout<<lcm;
    return 0;
}