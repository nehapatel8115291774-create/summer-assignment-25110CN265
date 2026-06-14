// WAP  to linear program.
#include<stdio.h>
int main()
{
    int i,n,key,loc=-1;

    printf("enter the number of element:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elemnt:");
    
    for(i=0;i<n;i++)
    {
        printf("enter A[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&key);

    // linear search

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("element %d found at position \n",key);
            loc=i;
            break;
        }
    }
       if(loc==-1) 
    {
        printf("ement %d is not at position \n",key);

    }
    return 0;
    }
    