#include<iostream>
using namespace std;
int main(){
   int num,i,sum=0; //i is for iteration for loop
   cout<<"enter number to(sum of natural number): ";
   cin>>num;

   while( i<=num){
      sum=num*(num+1)/2;
      
      i++;
   }
cout<<sum<<endl;
}
