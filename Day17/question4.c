//WAp to find a  common element
# include<stdio.h>
int main()
{
    int n1,n2,i,j;
    printf("enetr the size of first array :");
    scanf("%d",&n1);

    int arr1[n1];
    for(i=0 ; i<n1 ; i++)
    {
        printf("enter elemnet\t :");
        scanf("%d",&arr1[i]);
    }
    
    printf("enter the size of second array :");
    scanf("%d",&n2);
    int arr2[n2];
    for(i=0 ; i<n2 ; i++)
    {
        printf("enter the element\t :");
        scanf("%d",&arr2[i]);
    }

    // logic to check common element
    int found=0;
    for(i=0; i<n1 ; i++)
    {
        for(j=0 ; j<n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("common element found :%d\n",arr1[i]);
                found=1;
                
            }
        }
    

        // find first common you should get out 
    }
    if(found==0)
    printf("no common element found\n");
    return 0;


}