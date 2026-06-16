//WAP to find maximum frequency element.
#include<stdio.h>
int main()
{
    int i,n,j,maxcount=0,maxelement;

    printf("enter the number of element:");
    scanf("%d",&n);

int arr[n];
    for(i=0; i<n; i++)
    {
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        int count=0;
        for(j=0; j<n; j++) // to count how many time occur in arr[i]
        {
            if(arr[i]==arr[j])
            count++;
        }
        // if count is greater then update 

        if(count > maxcount)
        {
            maxcount=count;
            maxelement=arr[i];
        }
    }
     printf("element with maximum frequency is : %d \n",maxelement);
     printf("frequency is: %d", maxcount);
     return 0;


}