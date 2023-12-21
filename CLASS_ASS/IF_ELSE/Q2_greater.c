#include<stdio.h>
int main(){
     int num[5],i,max_no=0;
     printf("enter three no.:");
     for(i=0;i<3;i++){
        scanf("%d",&num[i]);
     }
          for(i=0;i<3;i++){
            if(num[i] > max_no){
                max_no = num[i];

            }else{
                max_no = max_no;
            }
            // printf("num is %d",num[i]);

     }
     printf("max no is %d",max_no);

 return 0;

} 