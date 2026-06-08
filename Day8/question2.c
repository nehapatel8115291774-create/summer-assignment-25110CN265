// WAp to print number triangle

#include<stdio.h>
int main()
{
    int i,j,n; // i = outer loop(row number),j=inner loop(column number)

    printf("enter the number of row:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        printf("\n");

    }
    return 0;
}