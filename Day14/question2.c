// WAP to freaquency of an element.
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the  number of element :");
    scanf("%d",&n);

    int arr[n],key,count=0;
    printf("enter the element for array:");

    for(i=0;i<n;i++)
{
    printf("enter the A[%d]",i);
    scanf("%d", &arr[i]);
}
printf("enter the element to find freaquency");
scanf("%d",&key);
for(i=0;i<n;i++)
{
    if(key==arr[i])
    {
        count++; // match mila to count badhao 
    }
}
if(count>0)
    printf("element %dis occur at %d time\n",key,count);
    else
    printf("element %d is not found in array\n",key);

return 0;
}

