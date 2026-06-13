//WAP to find largest and smallest element
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of  element:");
    scanf("%d",&n);
int arr[n],largest=arr[0],smallest=arr[0];
// to take input in array

    for(i=0;i<n;i++)
    {
        printf("enter number=");
        scanf("%d",&arr[i]);

         largest=arr[0];
         smallest=arr[0];
    }
    for(i=0;i<n;i++)
    
    {
        if(arr[i]>largest)
        largest=arr[i];
        if(arr[i]<smallest)
        smallest=arr[i];
    

    printf("%d\t",arr[i]);

    }
    printf("largest element:%d\n",largest);
    printf("smallest=element:%d\n",smallest);
     
    return 0;


    }


