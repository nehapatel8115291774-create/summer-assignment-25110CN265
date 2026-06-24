// wap to fird longest word
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] ;
    char longest[100];
    char word[100];
    int i=0 ,j=0 ,max=0;

    printf("enter a string :");
    fgets(str,sizeof(str),stdin);

    for(i=0 ; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] =str[i];
        }
            else
            {

                word[j] = '\0';
                if(j>max)
                {
                    max =j ;
                    strcpy(longest,word);
                }
                j=0 ;
                if(str[i] == '\0')
                break;

            }
        }
        printf("longest word = %s" , longest);
        return 0;
    }


