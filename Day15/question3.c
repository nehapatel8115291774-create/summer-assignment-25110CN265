// WAP to rotate array right 

#include<stdio.h>
int main()
{
    int n,i,j,temp,k;
    printf("enter number of element:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
    printf("enter %d element:",i+1);
    scanf("%d",&arr[i]);
}
printf("enter how many times to rotate right:");
scanf("%d",&k);
k=k % n;
// right rotate logic

for (i=0;i<k;i++)
{
    temp=arr[n-1];// save last element
    for(j=n-1;j>0;j--)
    arr[j]=arr[j-1]; // shift all elementin right
    arr[0]=temp; // put last elemnt inoto first element 
}
printf("array after right rotate by %d:");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
return 0;
}
