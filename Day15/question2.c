//WAP to rotate a array left.
#include<stdio.h>
int main()
{
    int n,i,first,temp,j;
    printf("enter number of element:");
    scanf("%d",&n);
    int  arr[n],k;
    for(i=0;i<n;i++)
    {
    printf("enter the array element :");
    scanf("%d",&arr[i]);

}
printf("enter how many time to rotate left:");
scanf("%d",&k);
k=k % n;  
// rotate k times

for(i=0;i<k;i++)
{
    temp=arr[0]; //element save
    for(j=0;j<n-1;j++)
    arr[j]=arr[j+1];
    arr[n-1] =temp;
     //  left shift left
}
 printf("array after rotate:");
 for(i=0;i<n;i++)
 printf("%d\t",arr[i]);
}