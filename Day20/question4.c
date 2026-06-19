// WAP to finf column wise sum
#include<stdio.h>
int main()
{
    int r, c, i,j;
    printf("enter the number of row and column :");
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

    // logic to find column wise sum

    int columnsum[c];
    for(j=0 ; j<c ; j++)
    {
        columnsum[j]= 0;
        for(i=0 ; i<r ; i++)
        {
            columnsum[j] += a[i][j];
        }
    }
}