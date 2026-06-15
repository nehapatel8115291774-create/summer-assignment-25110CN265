// WAP to reverse array.
#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("enter the number of element:");
    scanf("%d",&n);

    int arr[n];
    for(i=0 ; i<n; i++)
    {
    printf("enter the %d element :\n",n);
    scanf("%d",&arr[i]);
    
    }
    printf("original array:");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    
    //reverse logic
    {
        for(i=0; i<n/2;i++)
        {
            temp=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=temp;
        }
        printf("reversed array:");
        for(i=0; i<n;i++)
        printf("%d\t",arr[i]);
        return 0;

    }
}