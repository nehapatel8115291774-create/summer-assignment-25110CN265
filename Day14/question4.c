//WAP to to find duplicates in array.
#include<stdio.h>
int main()
{
    int n,i,j;
printf("enter number of element:");
scanf("%d",&n);

int arr[n];
printf("enter the %d element:\n",n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

// sort array
for (i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

// check duplicate
printf("duplicates element:");
int found=0;
for(i=0;i<n;i++)
{
    if(arr[i]==arr[i+1] && arr[i]!=arr[i-1])
    {
        printf("%d",arr[i]);
        found=i;
    }
}
if(found==0)
printf("none");
return 0;
}
