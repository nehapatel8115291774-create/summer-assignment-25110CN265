// WAP to find common character in string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] , str2[100] ;
    printf("enter the string :");
    fgets(str1,100,stdin);
    printf("enter the second string :");
    fgets(str2,100,stdin);

    printf("common character :");
    for(int i=0 ; str1[i]!= '\0' ; i++)
    {
        for(int j=0 ; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c",str1[i]);
                break;
            }
        }
    }
    return 0;
}