// WAP  to find sum and average of array.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
float avg;
    printf("enetr the number of element:");
    scanf("%d",&n);

    int arr[n];
for(i=0;i<n;i++)
{

printf("enter number\n");
scanf("%d",&arr[i]);
sum=sum + arr[i];
avg=(float)sum/n;

}
printf("array element are:");
for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
}
    printf("sum=%d",sum);
    printf("average=%2f",avg);

}