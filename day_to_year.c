#include<stdio.h>
int main(){
	float day,year;
int x;
	int do_next=1;
do{
	
	printf("press 1 to convert year to day\n");
	printf("press 2 to convert day to year\n"); 
	scanf("%d",&x);

	switch(x){
		case 1:
			 //convert year to day
			printf("enter year\n");
			scanf("%fyears",&year);
			day= 365*year;
			printf("%.3f days",day);
			break;
		case 2:
            //convert day to year 
        	printf("enter day\n");
			scanf("%fdays",&day);
			year= day/365;
			printf("%.3f years",year);
			break;
	
		default:
			printf("wrong input");
			break;	
	}
	if(do_next==1){
		printf("\ndo u want to continue press 1 else press 2 for end");
		scanf("%d",&do_next);
		continue;
	}else{
	break;
	}
	
}while(do_next==1);
}
