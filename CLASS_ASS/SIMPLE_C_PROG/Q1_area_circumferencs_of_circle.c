#include<stdio.h>
#include<math.h>
//find area and circumference of circle
int main(){
	
	float area,circumference,radies;
	
		printf("enter value of radies:");
    	scanf("%f",&radies);
	
	
	area = 3.14*pow(radies,2);
	circumference = 2*3.14*radies;
	

	printf("area of circle is:%.2f\ncircumference of circle is:%.2f",area,circumference);

	
	return 0;
}
