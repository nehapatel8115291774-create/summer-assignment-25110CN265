// WAP to count word in a sentences

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i , count =0 ;
    printf("enter a sentences :");
    fgets(str,sizeof(str),stdin); // fgets use

    // if first char space is not present then count 1 start

    if(str[0] != ' ' && str[0] != '\n')
    count =1;

    for( i=0 ; str[i] != '\0' ; i++)
    
    // jb bhi space le baad letter mile count increases
    
        if(str[i] == ' ' &&  str[i+1] != ' ' &&  str[i+1]  != '\0' && str[i+1] != '\n') 
        {
            count ++;
        }
    
    printf("total words =%d" , count);
    return 0;
}
