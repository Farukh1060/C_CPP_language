#include <stdio.h>
int main(){
		int bye;
		int quantity;
		int bye_more;
		int total_amount =0;          //"total amount " is the amount of more then one item or total bill
		int Amount;                   // 'amount' is the amount of single item

//menu item
	printf("----------------------menu-------------------------\n\n");
	
		printf("1.Pizza                         Price = 180rs/pic\n");
		printf("2.Burger                        Price = 100rs/pic\n");
		printf("3.Dosa                          Price = 120rs/pic\n");
		printf("4.Idli                          Price = 50rs/pic\n\n");

do{
	//print menu and option which can be selected by customer
	printf("----------------------menu-------------------------\n\n");
	
	printf("for pizza press 1.\n");
	printf("for burger press 2.\n");
	printf("for dosa press 3.\n");
	printf("for idli press 4.\n\n");
	printf("Enter your choose:");
		scanf("%d",&bye);
		// taking input or choice from user to bye

	switch(bye){
		case 1:
			//for pizza
			printf("Enter the quantity or pizza:");
			scanf("%d",&quantity);
			printf("u bye %d pizza for %d ruppes\n\n",quantity,quantity*180);	
			Amount= quantity*180;
			
			total_amount+= quantity*180;
			
			printf("Amount:%d\n",Amount);
			printf("Total_amount:%d\n\n",total_amount);
			
			
			printf("press 1 to bye more:\n or press 2 to exit");
			scanf("%d",&bye_more);
		
		break;
		case 2:
			//for burger
			printf("Enter the quantity of burger:");
			scanf("%d",&quantity);
			printf("u bye %d burger for %d ruppes\n\n",quantity,quantity*100);
			Amount =quantity*100;
			total_amount+= quantity*100;
			printf("Amount:%d \n",Amount);
			printf("Total_amount:%d\n\n",total_amount);
			
			printf("press 1 to bye more:\n or press 2 to exit");
			scanf("%d",&bye_more);
			
			break;
		case 3:
			//for dosha
			printf("Enter the quantity of dosha:");
			scanf("%d",&quantity);
			printf("u bye %d dosha for %d ruppes\n\n",quantity,quantity*120);
			Amount =quantity*120;
			total_amount+= quantity*120;
			printf("Amount:%d \n",Amount);
			printf("Total_amount:%d\n\n",total_amount);
			
			printf("press 1 to bye more:\n or press 2 to exit");
			scanf("%d",&bye_more);
	
			break;
		case 4:
			//for idle
			printf("Enter the quantity of idle:");
			scanf("%d",&quantity);
			printf("u bye %d idle for %d  ruppes\n\n",quantity,quantity*50);
			Amount =quantity*50;
			total_amount+= quantity*50;
			printf("Amount:%d\n",Amount);
			printf("Total_amount:%d\n\n",total_amount);
			
			printf("press 1 to bye more:\n or press 2 to exit");
			scanf("%d",&bye_more);
	
			break;
		default:
		bye_more = 1; 
		printf("\nyour choose is wrong\n");	
	}
	
  }while(bye_more==1);
  printf("\n\ntotal bill:%d",total_amount);
}
