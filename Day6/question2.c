// WAP to convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main()
{
long long binary;
int decimal= 0,i= 0,rem;

printf("enter the binary number :");
scanf("%lld",&binary);

while(binary!=0)
{
rem=binary % 10;
decimal=decimal+rem*pow(2,i);
binary=binary/10;
i++;

}

printf("decimal number=%d",decimal);
return 0;
}
