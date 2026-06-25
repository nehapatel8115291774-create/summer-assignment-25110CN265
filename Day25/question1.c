// WAP tomerged two sorted array
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the size of first sorted array:");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0 ; i<n1 ; i++)
    {
    printf("enter the element of first sorted array:");
    scanf("%d" ,&arr1[i]);
    }
    printf("enter the size of second sorted array :");
    scanf("%d",&n2);
    int arr2[n2];
    
    for (int i=0 ; i<n2 ;i++)
    {
        printf("enter the element of second array:");
        scanf("%d",&arr2[i]);

    }

    // result array
    int result[n1 + n2];
    int i=0 , j=0, k=0 ;

    // main logic
    while(i<n1 && j<n2)
    {
        if(arr1[i] <= arr2[j])
        {
            result[k++] = arr1[i++];
        }
        else{
            result[k++] = arr2[j++];
        }
    }

    // array ke left element copy 
    while(i<n1)
    {
        result[k++] = arr1[i++];
    }
    // array 2 ke left element copy
    while(j<n2)
    {
        result[k++] =arr2[j++];
    }
    printf("merged sorted array :");
    for(int x =0 ; x < n1 + n2 ; x++){
    printf("%d \t",result[x]);
    }
    return 0;

}