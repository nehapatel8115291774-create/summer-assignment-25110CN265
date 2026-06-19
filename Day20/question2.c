// WAP to check cnheck symmetric matrix
#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter the size of square matrix :");
    scanf(" %d %d",&r,&c);

    int a[r][c];
    for(i=0 ; i<r; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("enter the element :");
            scanf("%d",&a[i][j]);
        }
    }

    // logic to check symmetric
    int symmetric =1;

    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            if(a[i][j] == a[j][i])
            {
                symmetric = 1;
                break;

            }
        }
        if(symmetric==0)
        {
        break;
        }
    }
    if(symmetric == 1)
    {
        printf("matrix is symmetric :");
    }
    else{
        printf("matrix is not symmetric :");
    }
    return 0;
}