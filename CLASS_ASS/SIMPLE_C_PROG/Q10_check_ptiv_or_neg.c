#include<stdio.h>
int main(){
    int num;

    printf("enter positive or negative no.:");
    scanf("%d",&num);
    

    if(num>0){
        printf("no. is positive");
    }else if(num<0){
        printf("no. is negative");
    }else{
        printf("no. is zero");
    }
}