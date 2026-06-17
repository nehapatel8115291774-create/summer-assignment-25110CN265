// WAp to intersection of array.
#include<stdio.h>
int main()
{
    int n1,n2,i,j,k=0;
    printf("enter the size of first array :");
    scanf("%d",&n1);

    int arr1[n1];
    for(i=0 ; i<n1 ; i++)
    {
        printf("enter the element :");
        scanf("%d",&arr1[i]);
    }

    printf("enter the size of second array :");
    scanf("%d",&n2);

    int arr2[n2];
    for(i=0 ; i<n2; i++)

    {
        printf("enter the element :");
        scanf("%d",&arr2[i]);

    }
    int interarr[n1];
    // check common element
    for(i=0 ; i<n1 ; i++)
    {
        for(j=0 ; j<n2 ; j++)
        {
        if(arr1[i] ==arr2[j])
            {
              interarr[k++] = arr1[i];
              break;
            }
    }
}

// print intersection
if(k==0)
printf("no common elements ");
else{
    printf("intersection of array :");
    for(i=0 ; i<k ; i++)
    printf("%d\t" , interarr[i]);
}
return 0;
}
