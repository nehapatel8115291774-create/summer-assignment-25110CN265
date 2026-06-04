//WAP to find nth fibonacci term

#include<stdio.h>
int main()
{
    int n,i,firstterm=0,secondterm=1,nextterm;

    printf("enter the number of term");
    scanf("%d",&n);

    if(n==0)
    printf("%d",firstterm);
    else if(n==1)
    printf("%d", secondterm);
    else
{
    for (i = 2; i <=n;i++)

    {
        printf("%d",firstterm);
        nextterm=firstterm+secondterm;
        firstterm=secondterm;
        secondterm=nextterm;

    }
    printf("nth fibonacci term=%d",secondterm);
}
return 0;
}