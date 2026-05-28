//Wap to calculate sum of first N ntural number 

#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter the value of n ");
    scanf("%d",&n);
    i=1;sum=0;//initialisation
    while(i<n) //condition
    {sum=sum+i;
    i=i+1;
}
printf("\n sum =%d" ,sum);
return 0;
}