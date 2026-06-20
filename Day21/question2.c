// WAp  to reverse a string
#include<stdio.h>
int main()
{
    char str[100];
    int i=0,length = 0;
    char temp ;
    printf("enter a string:");
    scanf("%s",str);

    while(str[length] != '\0')
    {
        length ++;
    }
    for(i=0 ; i<length/2 ; i++)
    {
        temp = str[i];
        str[i] = str[length -1 -i];
        str[length-1-i] = temp;
    }
    printf("reversed string = %s",str);
    return 0;
}