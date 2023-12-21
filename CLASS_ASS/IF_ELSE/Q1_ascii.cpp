#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter digit/upperor lower case letter/special character: ";
    cin>>ch;
    if(ch>=32&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=126){
        cout<<"it's special character";
    }else if(ch>=65&&ch<=90){
        cout<<"it's upper case letter";
    }else if(ch>=97&&ch<=122){
        cout<<"it's lower case letter";
    }else if(ch>=4&&ch<=57){
        cout<<"it's digit";
    }else{
    
        cout<<"wrong input";
    
    }
}