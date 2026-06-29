// WAP to create menu driven calculator
#include<stdio.h>
int main()
{
    int ch, a, b;
    printf("1. Add\n 2. suib\n 3. mul\n 4. div\n");
    printf("Enter choice :");
    scanf("%d" , &ch);

    printf("Enter two number :");
    scanf("%d%d" ,  &a,&b);

    switch(ch)
    {
        case 1: printf("Result =%d" , a+b);
        break;
        case 2: printf("result =%d " , a-b);
        break;

        case 3: printf("Result = %d " ,a*b );
        break;

        case4 : 
        if(b != 0)
        printf("Result =%d" , a/b);
        else
        printf("Cannot divide by zero");
        break;
        default:
        printf("Invalid choice");
        

    }
    return 0;
}