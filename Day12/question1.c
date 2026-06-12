// WAP  to write function for palindrome.
#include<stdio.h>

// Function prototype
int ispalindrome(int n);
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);

    if(ispalindrome(num))
    printf("%d is a palindrome", num);
    else

    printf("%d is not a palindrome", num);

    return 0;
}
// Function defination
int ispalindrome(int n)
{
    int original=n;
    int reversed=0;
    int rem;

    while(n>0)
    {
        rem=n%10;
        reversed=reversed*10+rem;
        n=n/10;
    }

    if(original==reversed) 
    return 1; // true
    else
    return 0; // false
}