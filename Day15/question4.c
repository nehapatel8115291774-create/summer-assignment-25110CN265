// WAP to move zeros to end.
#include<stdio.h>
int main()
{
    int i,n,index=0;
    printf("enter number of element:");
    scanf("%d",&n);

    int arr[n];
for(i=0;i<n;i++)
{
    printf("element element %d:",i+1);
    scanf("%d",&arr[i]);
}
    // nonzero elerment ko aage
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[index]=arr[i];
            index++;

        }
    }
    // fill the zero in empty space
    while(index<n)
    {
        arr[index]=0;
        index ++;
    }
    printf("array afer moving the zero to end:");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}