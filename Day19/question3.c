// WAP to transpose of matrices.

#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter the number of row and column :");
    scanf("%d %d",&r,&c);

    int arr1[r][c];
    
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("enter the element of matrix :");
            scanf("%d",&arr1[i][j]);
        }
       printf("\n");
    }

    // logic to find transpose
    int transpose[c][r];
    printf("\ntranspose  of matrices\n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            transpose[j][i] = arr1[i][j];
        }
    }

    // to print transpose
    printf("\n transpose of matrices :\n");
    for(i=0 ; i<c ; i++)
    {
        for(j=0 ; j<r ; j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;


}