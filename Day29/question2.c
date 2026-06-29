// WAP to create menu driven array operation system
#include<stdio.h>
int main()
{
    int a[5],i ,ch, sum=0;
    printf("Enter 5 element :");
    for(i=0 ; i<5 ; i++ )
    scanf("%d" , &a[i]);

    printf("\n 1. Display \n 2. sum\n 3. Maximum\n");
    printf("Enter choice :");
    scanf("%d" ,&ch);
    switch(ch)
    {
        case 1:
        for(i=0 ; i<5 ; i++)
        printf("%d" , a[i]);
        break ;

        case 2:
        for(i=0 ; i<5 ;i++)
        sum += a[i];
        printf("sum  = %d" , sum);
        break ;
        case 3:
        {
            int max = a[0];
            for(i=1 ; i<5 ; i++)
            if(a[i] > max)
            max = a[i];
            printf("max = %d" , max);
            break ;

        }
        default:
        printf("Invalid choice");

    }
        
    return 0;
}

