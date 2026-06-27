// WAP to create employee management system.
#include<stdio.h>
int main()
{
    int id[5] , i;
    char name[5][30] ;
    float salary[5];
    // input
    for( i= 0 ; i<5 ; i++)
    {
        printf("\n enter details of employee %d\n",i+1);

        printf("Enter id :");
        scanf("%d", &id[i]);

        printf("enter name :");
        scanf("%s", &name[i]);

        printf("enter salary : ");
        scanf("%f", &salary[i]);
    }

    // display
    printf("\n ===Employee record ====\n");
    for(i=0 ; i<5 ; i++);
    {
        printf("\n employee = %d\n",i+1);
        printf("id :%d\n" , id[i]);
        printf("name :%s\n", name[i]);
        printf("salary : %2f\n", salary[i]);
    }
    return 0;
}