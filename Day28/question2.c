// WAp to create bank account system
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int acc_no[100];
    char name[100][50];
    float balance[100];
    int count = 0 ;
    int choice, i , accno,found;
    float amount ;

    while(1)
    {
        printf("\n=====bank management system====\n");
        printf("1. create account  \n");
        printf(" 2.deposite money\n");
        printf("3. Withdraw money\n");
        printf("4. check balance\n");
        printf("5. display all account \n");
        printf("6. Exit \n");
        printf("enter choice :");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:

            printf("\n Engter Account  Number:");
            scanf("%d" ,&acc_no[count]);

            printf("enter Name :");
            scanf("%[^\n]" , name [count ]);

            printf("enter initial balance:");
            scanf("%f", &balance[count]);

            printf("Account create succesfully:\n");
            count++;
            break;

            case 2: // deposit
            printf("\n Enetr account number:");
            scanf("%d",&accno);
            found = 0 ;
            for( i=0  ; i<count ; i++)

            {
                if (acc_no[i] == accno)
                {
                    found =1;
                    printf("Enter amlount to deposite :");
                    scanf("%d " , &amount);
                    if(amount >balance[i])
                    {
                        printf("insufficient balance!\n");
                    }
                    else
                    
                    {
                        balance[i] = amount;
                        printf("RS. %2f withdraw succesfully \n" , amount);
                        printf("Remaining bakance :%2f\n" , balance[i]);
                    }
                    break;
                }

                    }
                    if (found == 0)
                    printf("Accoiunt not found !\n :");
                    break;

                    case 4: // check balance
                    printf("\n Enter CCount number :");
                    scanf("%d",&accno);
                    found == 0;
                    for(i=0 ; i<count ; i++)
                    {
                        if (acc_no[i] == accno){
                            found =1;
                            printf("\n accouint holder :%s\n", name[i]);
                            printf("current balkance : Rs .%2f\n", balance[i]);
                            break;
                        }
                    }
                    if(found ==0 )
                    printf("account not ");
                    break;
                    case 5 : // Display all
                    printf("\n==== all account =====\n");
                    if(count == 0)
                    {
                        printf("No account found!\n");

                    }
                    else{
                        printf("Account number\t Name\t Balance\n");
                        printf("---------\n");
                        for(i=0 ; i<count ; i++)
                        {
                            printf("%d\t -15s%.2f\n", acc_no[i],name[i],balance[i]);
                        }
                    }
                    break ;

                    case 6 :
                    printf("Thanks you for usingh our  bank!\n");
                    exit(0);

                    default:
                    printf("invalid choice!\n");
                }
            }
            return 0 ;
        }



                    
                
            

            
        
    
