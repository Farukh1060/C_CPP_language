#include<stdio.h>
int main(){
	int subject[4],i;
	int sum = 0;
	float percentage ;
	printf("enter marks of 5 subject:");
	for(i=1;i<=5;i++){
		scanf("%d",&subject[i]);
		sum=sum+subject[i];
	}
	printf("total marks :%d",sum);
	
 	percentage = sum/5;
 	printf("\npercentage :%.1f ",percentage);
	
}
