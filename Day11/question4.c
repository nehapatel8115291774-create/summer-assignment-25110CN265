//WAPto write function to find factorial
#include<stdio.h>
// function prototype
long long factorial(int n);
int main()
{ 
    int num;
    long long fact;
 printf("enter a number:");
 scanf("%d",&num);
 if(num<0)
 printf("factorial is not defined for negative number");
 else{
    fact=factorial(num);
    printf("factorial 0f %d =%lld", num,fact);

 }
 return 0;
}
// function defination
long long factorial(int n)
{
    long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}