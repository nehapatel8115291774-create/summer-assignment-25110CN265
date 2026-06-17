// wap to union of array.
#include<stdio.h>
int main()
{
    int n1,n2,i,j,k=0;
    printf("enter the size of  first array :");
    scanf("%d",&n1);
    int arr1[n1];
    for(i=0; i<n1 ; i++)
    {
    printf("enter element :");
    scanf("%d",&arr1[i]);
    }

    
    printf("enter the size of second array :");
    scanf ("%d",&n2);
int arr2[n2];
    for(i=0; i<n2 ; i++)
    {
        printf("enter  element :");
        scanf("%d",&arr2[i]);
    }

    // union array maximum size = n1+n2

    int unionarr[n1+n2];

    // element of first array put in union array
    for(i=0; i<n1 ; i++)
    {
        unionarr[k++] = arr1[i];
    }
    // array 2 ke element tb dalna h jb yo phle na ho.
    for(i=0; i<n2 ; i++)
    {
        int found=0;
        for(j=0 ; j<n1 ; j++)
        {
            if(arr2[i] == arr1[j])
            {
                found =1; // dulpicate found
                break;
            }
        }
        
        if( found == 0)
        unionarr[k++]= arr2[i];
    }
    printf("union array :");
    for(i=0; i<k; i++)
    printf("%d",unionarr[i]);
    return 0 ;

} 