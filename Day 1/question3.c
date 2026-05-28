//write a prpgram to find a factorial of a given number

#include<stdio.h>
int main()
{int n,i;
    long long fact=1;
    printf("enter the given number");
    scanf("%d",&n);
    if (n<0)
    {printf ("factorialis not defined for negative  number");
    }
    else
    {
        for(i=1;i<=n;i++)

        fact=fact*i;
    
    }
        printf("  factorial of a given number %d is%lld \n",n,fact);
    
    }




