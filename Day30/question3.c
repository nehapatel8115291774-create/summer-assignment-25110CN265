// WAP to create mini employee  managemnet system
#include<stdio.h>
int main()
{
    char name[2][20];
    int id[2] , sal[2] ,i;

    for(i=0 ; i<2 ; i++)
    {
        printf("Id Name salary :");
        scanf("%d %s %d" , &id[i] , name[i] , &sal[i]);
    }
    printf("\nID \t Name \t Salary\n");
    for(i=0 ; i<2 ; i++)
    {
        printf("%d\t %s\t %d\n" ,&id[i] , name[i] , &sal[i]);
    }
    return 0 ;
}