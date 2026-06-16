// WAP to find missing number in array.
#include<stdio.h>
int main()
{
    int n,i,actualsum=0,expected_sum;
    printf("enter the number of element:");
    scanf("%d",&n);

    int arr[n];
    printf("enter the %d  element from 1 to %d:",n,n+1);

    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    actualsum = actualsum + arr[i];  // sum of all array element

}
expected_sum=(n+1)*(n+2)/2 ;  // sum of 1 to n
int missing=expected_sum - actualsum;

printf("missing number is :%d",missing);
return 0;
}
