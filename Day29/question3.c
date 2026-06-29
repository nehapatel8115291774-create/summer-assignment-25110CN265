// WAP to create menu driven string oiperation system
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int ch;

    printf("Enter string :");
    scanf("%s" ,str);

    printf("1. Length\n2. reverse\ 3. Upper case\n");
    scanf("%d" , &ch);


    switch(ch)
    {
    case 1:
    printf("length =%d" , strlen(str));
    
    break;

    case 2:
    strrev(str);
    printf("reverse + %s" , str);
    break;

   case 3:
   strupr(str);
   printf("uppercase = %s", str); 
   break;

   default:
   printf("Invalid choice");
}
return 0;
}

