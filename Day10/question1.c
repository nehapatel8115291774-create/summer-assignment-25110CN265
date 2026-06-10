//WAp to print a star pyramid.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of row:");
    scanf("%d",&n);

    for(i=1; i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
         printf("");
         for(j=1;j<=2*i-1;j++)
         printf("*");
         
         printf("\n");
    }
    return 0 ;

}