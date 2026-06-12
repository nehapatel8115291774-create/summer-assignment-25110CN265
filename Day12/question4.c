// WAP to write function for perfect number.
#include<stdio.h>
int isperfect(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    
    if(sum==n)
    return 1; // perfect h
    else 
    return 0; //perfect nhi h 
}
int main()
{
    int num;
    printf("enter anumber:");
    scanf("%d",&num);
    
    if(isperfect(num))


    {
    printf("%d is a perfect number",num);
    }
    else
    {
    printf("%d is not a perfect number",num);
    }
    return 0;
}
}
