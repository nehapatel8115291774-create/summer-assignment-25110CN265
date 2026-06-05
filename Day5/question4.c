// WAP to find largest prime number
#include<stdio.h>
int main()
{
int n,i,largest=0;
printf("enter a number:");
scanf("%d",&n);

for(i=2;i<=n;i++)
{
    while(n%i==0)
    {
        largest=i;
        n=n/i;
    }
}
printf("largest prime number=%d",largest);
return 0;
}
