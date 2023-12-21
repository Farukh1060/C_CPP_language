#include<stdio.h>
int main(){
    int numaretor1,denominator1,numaretor2,denominator2,numaretor,denominator;

     printf("enter numaretor1 :");
     scanf("%d",&numaretor1);

     printf("enter denominator1 :");
     scanf("%d",&denominator1);

    printf("enter numaretor2 :");
     scanf("%d",&numaretor2);

     printf("enter denominator2 :");
     scanf("%d",&denominator2);

numaretor =numaretor1*denominator2 + numaretor2*denominator1;
denominator = denominator1*denominator2;

printf("numaretor is %d",numaretor);
printf("\ndenominator is %d",denominator);


 return 0;

}