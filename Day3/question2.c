//WAP to print prime number in range .
#include<stdio.h>
int main()
{
    int start ,end,i,j,isprime;
     printf("enter the  start number");
     scanf("%d",&start);
      printf("enter the end number");
      scanf("%d",&end);
for(i=start;i<=end;i++)
{
    if(i<2)
    {
    continue;
    }
    isprime=1;
    for(j=2;j<i;j++)

    {
        if (i%j==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime)
    printf("%d",i);
}

return 0;
}



