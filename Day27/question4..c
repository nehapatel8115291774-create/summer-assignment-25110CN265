// WAP to create marksheet generation system.
#include<stdio.h>
int main()
{
    int n,i ,j;
    printf("Enter number of student :");
    scanf("%d" , &n);

    int roll[n];
    char name[n][50];

    int marks[n][5]; // assume 5 subject 
    int total[n];
    float percentage[n];

    char grade[n];
    char subject [5][20] = {"Math" , "physics" , " chemsitry" ,"english " , "hindi"};
    // input
    for(i=0 ; i<n ; i++)
    {
        for(i=0 ; i<n ; i++)
        printf("\n === Enter details for student %d ==\n" , i+1);
        printf("Roll number :");
        sacnf("%d" , &roll[i]);

        printf("Name :");
        scanf("[^\n]" , name[i]);

        total[i] =0 ;
        printf("Enter marks for 5 subject :\n");
        for(j=0 ; j<5 ; j++)
        printf("%s:" ,subject[j]);
        scanf("%d", &marks[i][j]);
        total[i] = total[i] + marks[i];

    }
    return 0 ;
}