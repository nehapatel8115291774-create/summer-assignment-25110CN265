// WAP to count vowels and consonants
#include<stdio.h>
int main()
{
    char str[100];
    int i=0 ,vowel =0 , consonants =0 ;
    printf("enter a string :");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] ==  'I' || str[i] == 'O' || str[i] == 'U' )
        {
            vowel++;
        }
        else{
            consonants ++;
        }
        i++;
    }
    printf("vowels = %d\n" , vowel);
    printf("consonants = %d\n", consonants);
    return 0 ;
}