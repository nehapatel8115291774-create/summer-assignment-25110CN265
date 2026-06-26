// WAP to create a number for gueisssing a  game
#include<stdio.h>
int main()
{
    int secret =25;
    int guess;
    printf("guess the number (1 to 50) \n");
    do
    {
        printf("enter your guess :");
        scanf("%d" ,&guess);

        if(guess > secret)
        
            printf("too high !\n");
        
        else if (guess < secret)
        
            printf("too low : \n");
        
        else
        
            printf(" correct ! you guessed the number");
        
    }
        while( guess != secret);
        return 0 ;
    } 
    
    


    
