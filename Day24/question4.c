// WAP to remove duplicate character
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j;

    printf("enter a string:");
    scanf("%s",str);

    for(i=0 ; str[i] != '\0'; i++)
    {
        for(j=i+1; str[j] != '\0';)
        {
            if(str[i] == str[j])
            {
                int k;
                for(k=j ; str[k] != '\0' ; k++)
                {
                    str[k] = str[k+1];
                }
            }
                else
                    j++;
                
                
            }

        }
        printf("string after remloving duplicates :%s", str);
        return 0;
    }
