#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
int main()
{
	system("color 3f");
	printf("***********GROUP MEMBERS NAME*************");
	printf("\n TUFAIL AHMED  52830 \n MUHAMMAD PASHA 53366 \n SAMEER 51058");
	int pin=1234,option,enteredpin,count=0,amount=1;
	float balance = 10000;
	int contTransaction = 1;
	time_t now;
	time(&now);
	printf("\n");
	printf("\n\t\t                    %s",ctime(&now));
	printf("\n\t\t=============*WELCOME TO TUFAIL BANK ATM*==============");
	while(pin!=enteredpin)
	{
		printf("\n\nEnter you pin: ");
		scanf("%d",&enteredpin);
		if(enteredpin != pin)
		{
			Beep(610,500);
			printf("Invalid Pin!");
		}
		count++;
		if(count==3 && pin != enteredpin)
		{
			exit(0);
		}
	}
	while(contTransaction != 0)
	{
		printf("\n\t\t===============*AVAILABLE TRANSACTION*=================");
	    printf("\n\n\t1.WITHDRAW");
	    printf("\n\t2.DEPOSIT");
	    printf("\n\t3.CHECK BALANCE");
	    printf("\n\tPlease Select The Option: ");
	    scanf("%d",&option);
	     switch(option)
	     {
	     	case 1:
	     		while (amount%500!=0)
	     		{
	     			printf("\n\tEnter the Amount: ");
	     			scanf("%d",&amount);
	     			if (amount % 500!=0)
	     			printf("\n\tThe Amount should be multiple of  500");
				 }
				 if (balance<amount)
				 {
				 	printf("\n\tSorry! insufficient balance");
				 	amount = 1;
				 	break;
				 }
				 else 
				 {
				 	balance -= amount;
					 printf("\n\tYou Have withdrawn Rs.%d. You new Balance is: %.2f",amount,balance); 
					 amount=1;
				 }break;
				 case 2: 
				 printf("\n\tPlease Enter the amount: ");
				 scanf("%d",&amount);
				 balance +=amount;
			     printf("\n\tYou Have Deposited Rs.%d. You new Balance is: %.2f",amount,balance);
			     printf("\n\n\t\t============*ThankQ For banking with Tufail Bank*=============");
				 amount =1; 
			     break;
				case 3: 
				printf("\n\tYour Balance is Rs.%.2f",balance);
				break;
				
				default: 
				Beep(610,510);
				printf("\n\t\tInvalid Option"); 
				   	
		  }
		        printf("\n\n\tDo U wish to perform Another Transaction?");
		        printf("\n\n\t       Press 1[Yes], 0[No]: ");
		        scanf("%d",&contTransaction);
	}
	return 0;
}
