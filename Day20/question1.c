// WAP to multiply matrices
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("enter the number of row and column :");
    scanf("%d %d",&r1,&c1);

    int a[r1][c1];
    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c1 ; j++)
        {
            printf("enter the element of first matrix :");
            scanf("%d",&a[i][j]);
        }
    }

    printf("eter the row and column of second matrices :");
    scanf("%d %d",&r2,&c2);

    int b[r2][c2];
    for(i=0 ; i<r2 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            printf("enter the element of second matrix :");
            scanf("%d",&b[i][j]);
        }
    }

    // logic to matrix
    int c[r1][c2],k;

    // to check multiply posssible or not
    if(c1!=r2)
    {
        printf("multiply is not possible :");
        return 0;
    }
    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            c[i][j] = 0;
            for(k=0 ; k<c1 ; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }

        }
    }

    // print the result 
    printf("\n resulted matrixes : \n");
    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ;j<c1 ; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0 ;

}