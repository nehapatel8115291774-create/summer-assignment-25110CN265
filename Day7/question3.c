//WAP to recursive sum of digit 
#include<stdio.h>
// recursive function for sum of digits
int sum0ofdigit(int n) 
{
    if (n==0)
    return 0; // base case: base case jb  number0 ho jasye
    else 
    return(n%10)+sum0ofdigit(n/10); // last digit + baki ka sum

}
int main(){
    int num;

    printf("enter a  number:");
    scanf("%d",&num);
     printf("sum of digit=%d",sum0ofdigit(num));
     return 0;
}