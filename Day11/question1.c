//WAp to write a functionto find sum of two number.
#include<stdio.h>
int sum(int a,int b);
int main()
{
    int num1,num2,result;
    printf("enter the two number:");
    scanf("%d %d",&num1,&num2);

    // function call
    result=sum(num1,num2);

    printf("sum=%d",result);
    return 0;

}
// function definition
int sum(int a,int b)
{
    return a+b;
}