#include<stdio.h>
int main(){
     //gross salary = basic PAY + HRA +DA-PF
     // DA =54% OF BASIC PAY
     //HRA =15% OF BASIC PAY
     //PF = 12% OF BASIC PAY

float gross_salary,basic_pay,DA,HRA,PF;

    printf("enter your basic pay: ");
    scanf("%f",&basic_pay);

         DA = 0.54*basic_pay;
         HRA = 0.15*basic_pay;
         PF = 0.12*basic_pay;
         gross_salary =basic_pay + HRA +DA-PF;

        //  printf("\n%f",basic_pay);
        //  printf("\n%f",DA);
        //  printf("\n%f",HRA);
        
    printf("\ngross_salary=%.2f",gross_salary);

 return 0;

}