//WAP to check armstrong number

#include<stdio.h>
int main()
{
int n,a,b,c,sum=0;
printf("enter the number:");
scanf("%d",&n);

a=n/100;
b=(n/10)%10;
c=n%10;

 sum=a*a*a + b*b*b  + c*c*c;
 if(sum==n)
 printf("armstrong number");
 else 
 printf("not armstrong number");
  return 0 ;
}
