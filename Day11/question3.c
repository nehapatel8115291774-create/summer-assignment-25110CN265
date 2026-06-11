//WAp to write function to check prime

#include<stdio.h>
// function prototype
int isprime( int n);

int main()
{
    int num,result;
    printf("enter a number:");
    scanf("%d",&num);

    result=isprime(num);

    if(result==1)
    printf("%d is  a prime number",num);
    else
    printf("%d is not a prime number",num);
    return 0;

}
// function defination
int isprime(int n)
{
    if(n<=1)
    return 0; // 1 and below are not prime
     for(int i=2; i<=n/2;i++)
     {
        if (n%i==0)
        return 0; // divible,not prime
     }
     return 1;//prime

}