// WAP to bubble sort.
#include<stdio.h>
int main()
{
    int n,i,j,temp;
    
    printf("enter the size of array :");
    scanf("%d",&n);
int arr1[n];
    for(i=0 ; i<n ; i++)
    {
    printf("enter the element :");
    scanf("%d",&arr1[i]);
    }

    // logic of bubble sort
    for(i=0 ; i<n-1; i++)
    {
        for(j=0 ; j<n-1-i ; j++)
        {
            if(arr1[j]> arr1[j+1])
            {
                // swap
                temp=arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    printf("sorted array : ");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\t", arr1[i]);
    }
    return 0;
}

    


