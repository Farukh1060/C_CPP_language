#include<stdio.h>
int main(){
	//simple interst
	float principle_amount,time,rate_of_intrest,simple_intrest;
	
	
    	printf("enter the principle amount :\n");                           //user input ,amount
    	scanf("%f",&principle_amount); 
	
    	printf("enter the  time period in year :\n");                       //time limit
    	scanf("%f",&time);
	
      	printf("enter the rate of interst :\n");                           //rate of intrest
    	scanf("%f",&rate_of_intrest);
	
	simple_intrest = (principle_amount*time*rate_of_intrest)/100;     //simple intrest formula
	
	printf("simple interst = %0.3f\n",simple_intrest);
	
	
}
