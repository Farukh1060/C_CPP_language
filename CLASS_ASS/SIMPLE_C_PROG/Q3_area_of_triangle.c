#include<stdio.h>
#include<math.h>
//find area of triangle
int main(){
	
	float area,base,height;
	
		printf("enter value of base and height:");
    	scanf("%f %f",&base,&height);
	
	
	area = 0.5*base*height;
	

	printf("area of triangle is: %.2f",area);

	
	return 0;
}
