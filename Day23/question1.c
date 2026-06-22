// WAP to find first non repeating character
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i ,j,count ;
    printf("enetr a string :");
    scanf("%s",str);
    for(i=0 ; str[i] != '\0' ; i++)
    {
        count = 0;
        for(j=0 ; str[j] != '\0' ; j++)
        {
            if(str[i] == str[j])
            count++;
        }
        if(count == 1)
        {
            printf("first non repeating character : %c" , str[i]);
            return 0;
        }
    }
    printf("no non repeating character found :");
    return 0;
}
