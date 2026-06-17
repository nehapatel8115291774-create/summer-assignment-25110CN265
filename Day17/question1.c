// WAP to merge arrays.
#include<stdio.h>
int main()
{
    int n1,n2,i ;

    printf("enter the size of first array :");
    scanf("%d\t" ,&n1);

    int arr1[n1];
    for(i=0 ; i<n1; i++)
    {
    printf("enter  element : " );
scanf("%d\t",&arr1[i]);
    }
    
        printf("enter the size of second array :");
        scanf("%d",&n2);
        int arr2[n2];

        for(i=0 ; i<n2 ;i++)
        {
            printf("enter the  element :");
            scanf("%d",&arr2[i]);
        }

        //  new array for merge 
        
        int n3=n1+n2;
        int arr3[n3];
         
        // copy for first array
        for(i=0; i<n1;i++)
        {
            arr3[i]=arr1[i];
        }
         //copy for second array

         for (i=0 ;i<n2; i++) 

         {
            arr3[n1+i] = arr2[i];
         }
         
         // print to merge array

            printf("merge array" , arr3[i]);
            for(i=0 ;i<n3; i++)
            printf("%d\t",arr3[i]);

            
            
         }


    
    