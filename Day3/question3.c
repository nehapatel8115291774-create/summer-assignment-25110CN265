//WAP to find GCD of tw0 number?

#include<stdio.h>

int main()
{
    int a,b,i,gcd;
     printf("enter the first number");
     scanf("%d", &a);
     printf("enter the second number");
     scanf("%d",&b);
      for(i=1;i<=a && i<=b;i++)
      {
      if(a%i==0 && b%i==0)
      {
        gcd=i;
}
}
printf("gcd=%d",gcd);
return 0;
}
    