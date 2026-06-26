//WAP to create quiz application
#include<stdio.h>
int main()
{
    int score =0, ans;
    printf("=====Quize application =====\n\n");

    printf("Q1. What is your name?\n");
    printf("1. Neha\n 2. Mohan\n 3. Rahul\n 4. prince\n");

    printf("enter your answer :");
    scanf("%d",&ans);

    if(ans==1)
    {
        printf("correct!\n");
        score++;
    }
    else{
        printf("Wrong!\n");
    }

    printf(" Q2. What is your district?\n");
    printf("1.Gautam buddha nagar\n 2. jaunpur\n 3. sultanpur\n 4. delhi\n");
    printf("enter your answer :");
    scanf("%d",&ans);

    if(ans==2)
    {
        printf("correct\n");
        score++;
    }
    else{
        printf("wrong!\n");
    }

    printf("\n Your final score = %d\2\n",score);
    return 0 ;
}