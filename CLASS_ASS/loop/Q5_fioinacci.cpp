#include<iostream>
using namespace std;
int main(){
  int num,i; // i is position in array to store vale
  cout<<"enter num: ";
  cin>>num;
 int fibonacci[num];
  do{
    if(i<2){
        fibonacci[i]=i;
    }else{
       fibonacci[i]= fibonacci[i-2]+ fibonacci[i-1];
    }
   
    i++;
  }while(i<=num);
for(int i = 0;i<num;i++){
cout<<fibonacci[i]<<" ";
}
 
}
