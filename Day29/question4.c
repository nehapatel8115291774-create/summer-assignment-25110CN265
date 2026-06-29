// WApo to  create inventory mangemnet system
#include<stdio.h>
int main()
{
    int id , qty ;
    float price ;
    printf("Enter Product ID :");
    scanf("%d" ,&id);

    printf("Enter Quantity :");
    scanf("%d" , qty);

    
    printf("Enter price :");
    scanf("%f" , &price);

    printf("\n --- Inventry detail ---\n");
    printf("product id :" ,id);
    printf("Quantity : %d\n" , qty);
    printf("price : %2f\n" ,price);
    printf("Total coast : %2f" , qty*price);
    return 0;
}