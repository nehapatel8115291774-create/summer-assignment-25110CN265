// WAP to second largest element.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number of  element :");
    scanf("%d",&n);

    int arr[n],max1,max2,p1,p2,temp;

    for(i=0;i<n;i++)
{
    printf("enter A[%d]=",i);
    scanf("%d",&arr[i]);
}
max1=arr[0];
for(i=1;i<n;i++)
{
if (arr[i]>max1)
{
max1=arr[i];
p1=i;
}
}
max2=-9999;
for(i=0;i<n;i++)
{
    if(max2<arr[i] && arr[i]!=max1)
    {
        max2=arr[i];
        p2=i;
    }
}
temp=arr[p1];
arr[p1]=arr[p2];
arr[p2]=temp;

printf("enter the array is \n");
for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);

    printf("max1=%d max2=%d\n",max1,max2);
}
}
