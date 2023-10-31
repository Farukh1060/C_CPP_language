#include<stdio.h>
int main(){
    int year;
    printf("leap year\n");
    printf("enter year to find\n ");
    scanf("%d",&year);
    if(year % 400 == 0 ){
    	
        printf("it's leap year");
        
    }else if(year % 100 == 0 ){
    	
        printf("not leap year");
        
    }else if(year % 4 == 0 ){
    	
        printf("it's leap year");
        
    }
	else{
        printf("not a leap year");
    }
    

}
