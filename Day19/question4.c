// WAP to find digonal element .
#include<stdio.h>
int main()
{
    int r,c ,i,j;
    printf("enetr the number of row and column :");
    scanf("%d %d",&r,&c);

    int a[r][c];
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("enetr the element of matrix :");
            scanf("%d",&a[i][j]);
        }
    }
     // logic to find diagonal element
     printf("\ndigonal element:");
     for(i=0 ; i<r ;i++)
     {
        for( j=0 ; j<c ;j++)
        {
            if(i==j)
            {
                printf("%d\t" ,a[i][j]);
            }
        }

     }
     return 0;
}