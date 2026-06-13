// WAP to count even and odd element
#include<stdio.h>
int main()
{
    int n,i;

    printf("enter the number of element:");
    scanf("%d",&n);
    int arr[n],even=0,odd=0;

    for(i=0;i<n;i++)
    {

        printf("enetr the number:");
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
        
        even++;
        
        else
        
            odd++;
        
    }

for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("even element:%d\n",even);
printf("odd element:%d\n",odd);

return 0;
}