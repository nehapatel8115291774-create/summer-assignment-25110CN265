//WAp to sort array in descednding order
#include<stdio.h>
int main()
{
    int n,i,j,temp;

    printf("enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0 ; i<n ; i++)
    {
        printf("enter element :");
        scanf("%d",&arr[i]);

    }
    // logic descending bubble sort
    for(i=0; i<n-1 ; i++)
    {
        for(j=0 ; j<n-1-i ; j++)
        {
            if(arr[j] <arr[j+1])
            {
                temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp ;
            }
        }
    }
    printf("sorted array in descending order :\n");
    for(i=0 ; i<n ; i++)
    {
    printf("%d",arr[i]);
    }
}