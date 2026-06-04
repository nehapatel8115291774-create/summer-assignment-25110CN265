#include<stdio.h>
int main()
{
    int n,firstterm=0,secondterm=1,nextterm,i;

    printf("enter the number of term");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d",firstterm);
        nextterm=firstterm+secondterm;
        firstterm=secondterm;
        secondterm=nextterm;

    }
    return 0;

}
