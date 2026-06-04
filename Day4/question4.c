//WAP to print armstrong number in a range.
#include<stdio.h>
int main()
{
    int n,a,b,c,i,sum,rem;
    printf("enter the number:");
    scanf("%d",&n);

    for(i=1;i<=1000;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem*rem*rem;
          n=n/10;
        }
if(sum==i)
printf("%d\t",i);
        }
        return 0;

    }
