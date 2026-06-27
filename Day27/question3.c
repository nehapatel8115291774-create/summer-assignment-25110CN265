// WAp  to create salary management system
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    printf("Enter number of employeet :");
    scanf("%d", &n);

    // Array for storing data 
    int id[n];
    char name [n][50];
    float basic[n],hra[n] , da[n] , tax[n] , gross[n] , net[n];

    // input 
    for(i=0 ; i<n ; i++)
    {
        printf("\n == Enter details for employee %d == \n" , i+1);
        printf("id : ");
        scanf("%d",&id[i]);

        printf("Name :");
        scanf("%[^\n]",name[i]); // space wala name lega 

        printf("basic salary :");
        scanf("%f" ,&basic[i]);

        // calulation
        hra[i] = 0.20 * basic[i];
        da[i] = 0.10*basic[i];
        gross[i] = basic[i] + hra[i] + da[i];

        // tax 10% if gross > 5000 else 5 %
        if(gross [i] > 5000)
        tax[i]= 0.10*gross[i];
        else 
        tax[i] = 0.05*gross[i];

        net[i] = gross[i] - tax[i];

    }

    // display salary slip

    printf("\n ==== salary slip ======\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\n Employee ID :%d , id[i]");
        printf("\n Name : %s ", name);
        printf("\n-----------------");
        printf("\n basic salary : %2f", basic [i]);
        printf("\nHRA (20%% : %2f)" , hra[i]);
        printf("\nDA (10%%): 2f" , da[i]);
        printf("\n gross salary : %2f", gross[i]);
        printf("\n tax deducted : %2f" , tax[i]);
        printf("\n -----------------");
        printf("net salary : %2f" , net[i]);
        printf("\n==========");
    }
    return 0;
}