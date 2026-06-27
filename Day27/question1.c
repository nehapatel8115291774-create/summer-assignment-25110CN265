// WAp to create student record management system
#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int  main()
{
    struct student s[5];
    int i;
    // input
    for(i=0 ; i<5 ; i++)
    {
        printf("\n Enter detail of student %d\n",i+1);
        printf("Roll number :");
        scanf("%d" , &s[i].roll);

        printf("Name:");
        scanf("%s",s[i].name);
        
        printf("Marks : ");
        scanf("%f", &s[i].marks);
    }

    // display
    printf("\n === student record =====\n");
    for(i=0 ; i<5 ; i++)
    {
        printf("\n student %d\n",i+1);
        printf("roll number =%d\n", s[i].roll);
        printf("Name =%s\n",s[i].name);
        printf("Marks:%2f\n",s[i].marks);
    }
    return 0;
}