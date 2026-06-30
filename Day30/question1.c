// WAP to create student record system using array and string
#include<stdio.h>
int main()
{
    char name[5][30];
    int marks[5],i ;
    
    // input
    for(i=0 ; i<5 ; i++)
    {
        printf("Enter name :");
        scanf("%s" , &name[i]);

        printf("Enter Marks :");
        scanf("%d" , &marks[i]);

    }
    // output
    printf("student record\n");
    scanf("Name\t, marks\t\n");

    for(i=0 ; i<5 ; i++)
    {
    printf("%s\td\n" , name[i] ,marks[i]);
    }
    return 0 ;


}
