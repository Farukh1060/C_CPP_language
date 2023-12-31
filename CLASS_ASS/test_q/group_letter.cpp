#include<iostream>
using namespace std;
int main(){
    string name;
    int num,j=0;
    cout<<"enter name: ";
    getline(cin,name);
    cout<<"enter no to group: ";
    cin>>num;
    
    for(int i=0;i<name.length();i++){
        if(num!=j){
             cout<<name[i];
             j++;
        }else if(num==j){
            cout<<endl;
             cout<<name[i];
            j=1;
        }
        
    }

}