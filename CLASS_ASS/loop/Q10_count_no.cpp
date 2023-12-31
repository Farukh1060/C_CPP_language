#include<iostream>
using namespace std;
int main(){
    int num,revers_no,i=0;
    double count=0;
    cout<<"enter number : ";
    cin>>num;

        while(i<=num){

             count++;
            revers_no=num%10;
            num= num/10;
           
            if(num==0){
                break;

            }else{
                continue;
            }
            i++;

        }

//          for(int i=0;i<12;i++){
//             count++;
//             revers_no=num%10;
//             num= num/10;
           
//             if(num==0){
//                 break;

//             }else{
//                 continue;
//             }

//         }
         cout<<count<<" digits";
}