//WAP  to find pair with given sum.
#include<stdio.h>
int main()
{
    int i,j,n,sum;
    printf("enter the number of element:");
    scanf("%d",&n);
int arr[n];
    for(i=0; i<n ; i++)
    {
    printf("enter the array element : ");
    scanf("%d",&arr[i]);
    }
    printf("enter the sum to find pair:");
    scanf("%d",&sum);

    printf("pair with sum %d are:\n", sum);
    int found=0;
    for(i=0;i<n; i++)
    {
        for(j=0 ; j<n; j++)
        {
            if(arr[i]+arr[j] == sum)
            {
                printf("%d + %d = %d\n",arr[i],arr[j],sum);
                found=1;
            }
        }
    }
    if(found ==  0)
    printf("no pair fount\n");
    return 0;
}