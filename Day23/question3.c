// WAP to check anagram  string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] , str2[100];
    int i,count1[256] ={0} , count2[256] = {0};
    printf("enter the first string :");
    scanf("%s", str1);
    printf("enter thye second string :");
    scanf("%s",str2);
    if(strlen(str1) != strlen(str2))
    {
        printf("not anagram ");
        return 0 ;

    }
    for(i=0 ; str1[i] != '\0' ; i++)
    {
        count1[str1[i]]++ ;
        count2[str2[i]]++;
    }
    for(i=0 ; i<256 ; i++)
    {
        {
            if(count1[i] !=  count2[i])

        printf("not anagram");
        return 0;
    }
}
printf("anagram");
return 0;
}
