// WAP to check palindrome string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] ;
    int i, len , ispallindrome=1;
    printf("enter the string  :");
    scanf("%s",str);

    len = strlen(str);

    //check from start and end
    for(i=0 ; i<len/2 ; i++)
    {
        if(str[i] != str[ len-1-i])
        {
            ispallindrome = 0;
             break;
        }
    }

    if(ispallindrome == 1)
    {
        printf("%s is a pallindrome " , str);
    }
    else
    {
        printf("%s is not pallindrome" , str);
    }
    return 0;
}