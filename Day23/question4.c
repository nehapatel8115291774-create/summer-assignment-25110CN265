// WAP to find maximum occuring character
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    int i, max =0 ;
    char ch;
    printf("enter a string :");
    scanf("%s" ,str);
    for(i=0 ; str[i] != '\0' ; i++)
    {
        freq[str[i]]++;
        if (freq[str[i]] > max)
        {
            max = freq[str[i]];
            ch = str[i];
        }
    }
    printf("maximum occuring charcter =%c",ch);
    printf("\n freqency =%d" ,max);
    return 0;
}