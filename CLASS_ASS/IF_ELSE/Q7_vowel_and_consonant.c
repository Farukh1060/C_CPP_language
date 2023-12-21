#include<stdio.h>
int main(){
	char x;
		printf("enter character from a to z:");
		scanf("%c",&x);
	switch(x){	
		case 'a' :
		case 'e' :
		case 'i' :
    	case 'o' :
		case 'u' :
			printf("char is vowel");
			break;
		default :
			printf("char is consonant");
			break;	
            }
}
