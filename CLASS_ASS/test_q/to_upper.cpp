#include<iostream>
#include<string>
using namespace std;
class transform{
    public:
     int i;  
    void toupper_case(string name){
        //  cout<<"enter name :";
        //  getline(cin,name);

            for ( i = 0; i < name.length(); i++)
    {
        if( name[i]+0>64 && name[i]+0<91 || name[i]+0==32){
           name[i] =name[i]-0;

        }else{
            name[i] =name[i]-32;      
        }  
    }
    cout<<name<<endl;
    };

      void tolower_case(string name){
        //  cout<<"enter name :";
        //  getline(cin,name);

            for ( i = 0; i < name.length(); i++)
    {
        if( name[i]+0>96 && name[i]+0<123 || name[i]+0==32){
           name[i] =name[i]-0;

        }else{
            name[i] =name[i]+32;      
        }  
    }
    cout<<name<<endl;
    };

       void mix_case(string name){
        //  cout<<"enter name :";
        //  getline(cin,name);

            for ( i = 0; i < name.length(); i++)
    {
        if( name[i]+0>96 && name[i]+0<123){
           name[i] =name[i]-32;

        }else if(name[i]+0==32){
             name[i] =name[i]-0;
        }
        else{
            name[i] =name[i]+32;      
        }  
    }
    cout<<name<<endl;
    };
     
};
int main(){
   
   transform n;
   n.toupper_case("shaikh farukh");

   n.tolower_case("MASter Cam");
    n.mix_case("MaStEr CaM");


   
    
}