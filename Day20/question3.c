// WAP to find row wise sum

#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter the row and column  of matrix :");
    scanf("%d %d",&r,&c);

    int a[r][c];
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("enter the element :");
            scanf("%d",&a[i][j]);
        }
    }

    // logic to row wise sum 
                              //  1 2 3
                         
    int  rowsum[r];
    for(i=0 ; i<r ; i++)
    {
        rowsum[i]=0;
        for(j=0 ; j<c ;j++)
        {
            rowsum[i] += a[i][j];
        }
    }

    for(i=0 ; i<r ; i++)

    {
        printf("sum of row %d = %d\n",i+1,rowsum[i]);
    }
}

