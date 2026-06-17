//WAP to selection sort.
#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    printf("enetr the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0 ; i<n ; i++){
    printf("enter the element :");
    scanf("%d",&arr[i]);

    }

    // logic for selection sort
    for(i=0 ; i<n ; i++)
    {
        min =i;
        for(j=i ; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("sorted array :");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}