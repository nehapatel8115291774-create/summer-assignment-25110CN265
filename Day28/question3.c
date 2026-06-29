// WAP toi create ticket booking system
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int  main()
{
    int seat_no[50]; // 50 seat max
    char name[50][50]; // paasenger
    int status[50] ={0}; // 0 = available,1 booked
    int choice ,i , seat,found;
    int total_seat =20 ;
    // inilise seat number 1 ton 20
    for(i=0 ; i<total_seat ; i++)
    {
        seat_no[i] = i+1;
        status[i] = 0 ; // all available initial
    }
    while(1)
    {
        printf("\n === Ticket booking system ====\n");
        printf("1. Show all seat\n");
        printf("2. Book ticket\n");
        printf("3. cancel ticket\n");
        printf("4. check seta status\n");
        printf("5. Exit\n");
        printf("enter choice :");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: // show all seat
            printf("\n === Seatt status====\n");
            printf("seat no\t status \t passenger");
            printf("-----------\n");
            for(i=0 ; i<total_seat ; i++)
            {
                printf("%d\t" , seat_no[i]);
                if(status[i] == 0)
                printf("available\t _\n");
                else
                printf("Booked \t \t%s\n",name);

            }
        }
    }
    return 0;

    }
    
