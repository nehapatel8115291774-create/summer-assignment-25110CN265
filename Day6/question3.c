//WAP to count bits set in a number.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number:");
    scanf("%d",&n);

    while(n>0)
    {
        count=count+(n%2);
        n=n/2;

    }
        printf("number of set bits=%d",count);

    
    return 0;
}