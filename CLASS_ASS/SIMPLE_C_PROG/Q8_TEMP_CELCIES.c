#include<stdio.h>

int main(){
	
	float celci,fahrenheit;
	printf("enter temperature in celsius:");
	scanf("%f",&celci);
	
//	printf("%f",celci);
	fahrenheit = 1.8*celci+32;
	
	printf("\n%f degree celcius = %.3f degree fahrenheit ",celci,fahrenheit);
	
}
