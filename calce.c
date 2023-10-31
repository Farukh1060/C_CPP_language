#include <stdio.h>
int main(){
	int a,b;               // store input vale from user
	char operater;
	int do_next=1;
do{
	
	printf("simple calculater to add two number\n\n");
	printf("enter 1st no., operater and 2nd no.:");
	 scanf("%d %c %d",&a,&operater,&b);  //taking input from user num,operater and num
	switch(operater){
		case '+':
			//add
			printf("%d+%d=%d",a,b,a+b);
			break;
		case '-':
			//sub
			printf("%d-%d=%d",a,b,a-b);
			break;
		case '*':
			//mull
			printf("%d*%d=%d",a,b,a*b);
			break;
		case '/':
			//div
			printf("%d / %d=%.3f",a,b,(float)a/b);
			break;
		case '%':
			//module
			printf("%d mod %d=%d",a,b,a%b);
			break;
		default:
			printf("wrong input");
			break;	
	}
	if(do_next==1){
		printf("\ndo u want to continue press 1 else press2 for end");
		scanf("%d",&do_next);
		continue;
	}else{
	break;
	}
	
 }while(do_next==1);

}
 
