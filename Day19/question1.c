// WAP to add matrices
#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter the number of row and column :");
    scanf("%d %d",&r,&c);

    int arr1[r][c];
    for(i=0 ;i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
           printf("enter the element of first matrix :");
           scanf("%d",&arr1[i][j]);
        }
        
    }

    int arr2[r][c];
    for(i=0 ;i<r ; i++)
    {
        for (j=0 ;j<c ; j++)
        {
            printf("enter the element of second matrix :");
            scanf("%d",&arr2[i][j]);
        }
        
    }

    //logic to add matrix
    int sum[r][c];
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
         sum[i][j]= arr1[i][j]+arr2[i][j];
        
        }
    }
    //print sum

    printf("\nsum of atrix\n");
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c ; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");

    }

    
}

    


