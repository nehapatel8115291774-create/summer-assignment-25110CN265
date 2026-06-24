// WAP to check string rotation
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] , str2[100] , temp[200] ;
    printf("enter the first string :");
    scanf("%s" ,str1);

    printf("enter the second string :");
    scanf("%s" , str2);
    
    if(strlen(str1) != strlen(str2))
    {
        printf("not rotation ");
        return 9 ;
    }
    strcpy(temp , str1);
    strcat(temp ,str1);
    if(strstr(temp , str2))
    printf("Rotation") ;
    else{
        printf(" Not rotation");
    
    }
    return 0;
}