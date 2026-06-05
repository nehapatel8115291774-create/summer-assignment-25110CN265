//WAP to print factor of a number
#include<stdio.h>
int main()
{
int n,i;
 printf("enter thye number:");
 scanf("%d",&n);

 printf("factor are:");
for(i=1;i<=n;i++)
{
    if (n%i==0)
    {
        printf("%d\t",i);
    }
}
return 0;

}