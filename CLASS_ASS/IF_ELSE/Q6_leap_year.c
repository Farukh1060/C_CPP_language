#include<stdio.h>
int main(){
    int year;
    printf("leap year\n");
    printf("enter year to find\n ");
    scanf("%d",&year);
    //year which is divided by 4 and 400 is leap year and the year which is divided by 100 and not divided by 400 is skiped as leap year.
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
