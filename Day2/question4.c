//WAP to check wheather a number is pallindrome.
# include<stdio.h>
int main()
{
    int n,rev=0,r,n1;
     printf("enter the number");
     scanf("%d" ,&n);
     n1=n;
      while(n>0)
      {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
      }
    

      if (rev==n1)
      {
        printf("pollindrome");

      }
    else
    { printf("not pollindrome");
    }
}
