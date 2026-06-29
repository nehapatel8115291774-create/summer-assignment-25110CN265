// WAp to create liberry mangement system

#include<stdio.h>
int main()
{
    int bookid[5] ={101,102,103,104,105};
    int status[5] ={0,0,0,0,0};
    int choice, id ,i ,found;
    do
    {
        printf("\n ======Liberary management system  ====\n");
        printf("1. Display Books\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");

        printf(" enter your choice  :");
        scanf("%d" , &choice);

        switch (choice)
        {
            case 1:
            printf("\n Book Id\t status\n");
            for(i=0 ; i<5 ; i++)
            {
                printf("%d\t" , bookid[i]);
                if(status[i] == 0)
                printf("Available\n");

                else
                printf("Issused \n");
            }
            break;

            case 2 :
            printf(" entered book id:");
            scanf("%d", &id);

            found = 0;
            for(i=0 ; i< 5 ;i++)
            {
                if(bookid[i] == id)
                {
                found =1 ;

                if (status [i] ==0)
                {
                    status[i] == 1;
                    printf("Book issued succesfully \n");

                }
                else
                {
                    printf(" Book Already Issued");
                }
            }
            

        }
        if(found == 0)
        printf("book Id not found.\n");
        break;

        case 3 :
        printf("Enter book id : ");
        scanf("%d", &id);
        found =0 ;
        for(i=0 ; i<5 ; i++)
        {
            if(bookid[i] == 1)
            {
                found =1 ;
                if(status[i] == 1)
                {
                    status[i] = 0 ;
                    printf("book Returned succesfully\n");
                    
                }
                else{
                    printf("book is already Available\n");
                }
            }
        }
        if(found == 0 )
        printf("Book Id not found .\n");
        break;

        case 4 :
        printf("thanks you\n");

        break;

        default:

        printf("invalid choice\n");
    }
}

while(choice != 4);
return 0;

}