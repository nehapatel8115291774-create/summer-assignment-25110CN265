// WAP to print lcm of two number
#include<stdio.h>
int main()
{
    int a,b,lcm,i,gcd;
     
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
// gcd find
for(i=1;i<=a && i<=b;i++)
{
    if (a%i==0 &&b%i==0)
    {gcd=i;
    }
}
//ab lcm = (a*b)/gcd
lcm=(a*b)/gcd;
printf("gcd=%d\n",gcd);
printf("lcm=%d", lcm);
return 0;
}