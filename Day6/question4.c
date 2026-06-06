// WAP to find x^n without pow().

#include<stdio.h>
int main()
{
int x,n,result=1;
printf("enter x and n :");
scanf("%d %d",&x,&n);

for(int i=1;i<=n;i++)
{
    result=result*x;
}
printf("%d" , result);
return 0;

}