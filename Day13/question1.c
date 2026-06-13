//WAP to input and display array.
#include<stdio.h>
// funtion to take array input
int main()
{
    int n,i;
    
    printf("enter the number of element:");
    scanf("%d",&n);

int arr[n];
for(i=0;i<n;i++)
{
    printf("enter number\n");
    scanf("%d",&arr[i]);
}
printf("array element are:");
for(i=0;i<n;i++)
{
    printf("%d \t",arr[i]);
}
return 0;
}
