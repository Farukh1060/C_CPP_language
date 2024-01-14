#include<iostream>
//3. Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables.
using namespace std;
class car{
    private:
     string company;
     string model;
     int year;
    public:
        void setcompany(string c){
            company=c;
        }
        void setmodel(string m){
            model=m;
        }
        void setyear(int y){
            year=y;
        }
        string getcompany(){
            return company;
        }
        string getmodel(){
            return model;
        }
        int getyear(){
            return year;
        }



};
int main(){
    car c;
    c.setcompany("bmw");
    c.setmodel("top_model");
    c.setyear(1997);
    cout<<c.getcompany()<<endl;
    cout<<c.getmodel()<<endl;
    cout<<c.getyear()<<endl;
    
    return 0;
}
