#include <stdio.h>
#include<math.h>
int main(){
	int a;
		float radies,base,height,length,area;

	int do_next=1;
do{
	
	printf("press 1 to find the area of circle\n");
	printf("press 2 to find the area of tringle\n");
	printf("press 3 to find the area of rectangle\n");
	
	scanf("%d",&a);
	
		switch(a){
		case 1:
			//find the area of circle
			printf("enter value of radies:");
			scanf("%f",&radies);
			area=3.14159*pow(radies,2);
			printf("area of circle is:%.3f",area);
			break;
		case 2:
			// find the area of tringle
			printf("enter value of base and height:");
			scanf("%f %f",&base,&height);
			area=.5*base*height;
			printf("area of triangle is:%.3f",area);
			break;
		case 3:
			//find the area of rectangle
			printf("enter value of length and height:");
			scanf("%f %f",&length,&height);
			area=length*height;
			printf("area of rectangle is:%.3f",area);
			break;
	
		default:
			printf("wrong input");
			break;		
	}
	if(do_next==1){
		printf("\ndo u want to continue press 1 or press 2 for end");
		scanf("%d",&do_next);
		continue;
	}else{
	break;
	}
	
}while(do_next==1);

}
