#include<iostream>
using namespace std;
int main(){
    string name;
    int num,count=0;
    cout<<"enter name: ";
    getline(cin,name);
    cout<<"enter no to group: ";
    cin>>num;
    
    for(int i=0;i<name.length();i++){
        if(num!=count){
             cout<<name[i];
             count++;
        }else if(num==count){
            cout<<endl;
             cout<<name[i];
            count=1;
        }
        
    }

}
