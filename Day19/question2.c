// WAP to subtract matrices
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
    
    printf("enter the element of first array :");
    scanf("%d",&arr1[i][i]);
}
    }

    int arr2[r][c];
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c; j++)
        {
            printf("enter the element of second array :");
            scanf("%d",&arr2[i][j]);
        }
    }

    // logic to subtract matrices
    int subtract[r][c];
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            subtract[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("\n subtract of matrix:\n");
    for(i=0 ; i<r ;i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("%d\t",subtract[i][j]);
        }
        
        printf("\n"); //after  every row new line

    }
    return 0;
}