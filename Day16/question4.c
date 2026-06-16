// WAP to remove duplicates from array.
# include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enetr the number of array element:");
    scanf("%d",&n);

    int arr[n];
    for(i=0; i<n ; i++)
    {
    printf("enter the array element :");
    scanf("%d",&arr[i]);
    }

    // logice gto remove duplicates

    for(i=0 ;i<n ;i++)
    {
        for(j=i+1; j<n ;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j ;k<n-1 ;k++) // if duliplicate found then shift 
                {
                    arr[k]=arr[k+1];
                }
                n--; // to reduce the array size by 1
                j--; // same index ko dubara check krna h
            }
        }
    }
    printf("array after removing duplicates : \n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}