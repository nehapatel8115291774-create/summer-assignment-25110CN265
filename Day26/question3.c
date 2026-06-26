// WAp  to create ATM simulation.
#include<stdio.h>
int main()
{
int pin = 1234 , enteredpin , choice;
float balance = 5000 , amount ;
printf("enter ATM pin :");
scanf("%d",&enteredpin);

if(enteredpin != pin)
{
    printf("`incorrect pin \n");
    return 0 ;
}
printf("\n 1. check balance\n");
printf("2. deposite \n");
printf("3. withdraw\n");
printf("Enter your choice :");
scanf("%d" , &choice);

switch (choice)
{
  case 1:
  printf("current balance =%2f\n" , balance);
  break;

  case 2:
  printf("Enter amount opf deposit : ");
  scanf("%f" , &amount);
  balance = balance + amount;
  printf("Updated balance= %2f\n" ,balance);
  break;

  case 3 :
  printf("enter amount of withdraw : ");
  scanf("%f" ,&amount);
  if(amount <= balance)

  {
    balance = balance - amount ;
    printf("please collect your cash\n");

    printf("remaining balance = %2f\n" ,balance);

  }
   else
   {
    printf("insufficient balance\n");
   }
   break;

   default:
   printf("invalid choice\n");
  }
return 0 ;

}


    