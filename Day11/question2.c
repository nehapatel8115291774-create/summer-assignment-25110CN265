// WAp to write function to find maximum.
#include<stdio.h>

// function prototype
int findMax(int a,int b);
int main()
{
    int num1,num2,max;
    printf("enetr the number:");
    scanf("%d %d",&num1,&num2);

    // function call

    max=findMax(num1,num2);
     printf("Maximum=%d",max);
     return 0;

}

// function defination
int findMax(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}