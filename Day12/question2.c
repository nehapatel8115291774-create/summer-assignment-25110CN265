
//WAP to write a function for armstrong

#include<stdio.h>
int isarmstrong(int n);

int main()
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    if(isarmstrong(num))
    {

    printf("%d is armstrong",num);
    }
    else
    {
    printf("%d is not armstrong",num);
    }
    return 0;
}
int isarmstrong(int n)
{
    int original=n;
    int sum=0;
    int rem;

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==original)
    return 1;
    else
    return 0;
}
    
