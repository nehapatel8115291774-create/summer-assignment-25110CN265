//WAP to find sum of digit of a number

#include<stdio.h>
int main()
{
     int n,i=2,r,count=0;
     printf("enter the number");
     scanf("%d", &n);
     while(i<=n-1)
     {
        r=n%i;
        if(r==0)
        {
            count++;
        }
     i=i+1;
     }
    if (count==0)
    {
printf("number is prime");
}
else
{
    printf("number is not prime");
}
return 0;
     }  
    
     
    

