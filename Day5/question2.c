// WAP to check strong number.
#include<stdio.h>
int main()
{
    int n,temp,r,sum=0,fact,i;

    printf("enetr the number");
    scanf("%d",&n);

    temp=n;
    while(temp>0)
    {
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if (sum==n)
    printf("strong number");
    else
    printf("not a strong number");
    return 0;

    }
    

