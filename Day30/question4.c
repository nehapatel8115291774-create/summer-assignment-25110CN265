// WAP to develop complete mini project using using array and functions.
#include<stdio.h>
void input (int id[] , char name[] [20] , int n);{
int i;
for(i= 0 ; i<n ; i++)
{
    printf("Enter ID and name :");
    scanf("%d %s" , &id[i] , name[i]);
}
}

void displya(int id[] ,char name [][20] , int n)
{
    int i;
    printf("\n Employee  record\n");
    for(i=0 ; i<n ; i++)
    printf("%d\t%s\n" , id[i] , name[i]);
}

int main()
{
int id[3];
char name[3][20];
input(id , name,3);
display(id , name,3);
return 0 ;


}