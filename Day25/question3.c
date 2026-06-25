// WAP to sort names alphabetically
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] ;
    printf("enter the string :");
    scanf("%s",str);

    int len = strlen(str);

    // bubble sort
    for(int i =0 ; i<len-1 ; i++)
    {
        for(int j=0 ; j<len-i -1 ; j++)
        {
            if(str[j] > str[j+1])
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    printf("sorted string : %s" , str);
    return 0;
}