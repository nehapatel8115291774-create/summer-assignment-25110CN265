// WAP to create mini liberary system
#include<stdio.h>
int main()
{
    char book [3][30];
    int i;

    // input
    for(i=0 ; i<3 ; i++)
    {
        printf("Enter Book name:");
        scanf("%s" , book[i]);

    }
    // output
    printf("\n Liberary Book :\n");
    for(i=0 ; i<3 ; i++)
    {
        printf("%d.%s\n" , i+1 , book[i]);
    }
    
}
