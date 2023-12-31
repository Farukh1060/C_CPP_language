#include<iostream>
using namespace std;
void count(string name){

    int ch,count=0,first_count=name.length(); //i is for iteration,ch get the asci valueof character
                                    //first count is for count 2time in start

    for(int i=0;i<=name.length();i++){
        
      
        ch=name[i];
        if(ch==32){
             
            if(first_count>i){
                count++;
                first_count=i;
            }
                 count++;   
                }

         if(ch!=32&&ch<127&&i==name.length()&&count==0){
        count++;
        
        }

    }

cout<<count;


}
    
    

int main(){

    count("far aru ukh ukh");
  
}   