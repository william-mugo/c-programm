// Calculation of Simple Interest
#include<stdio.h>
int main ()
{
    int a,t,r,interest;
    printf("\n Enter Value of A:");
    scanf("%d",&a);
    printf("\n Enter Value of T:");
    scanf("%d",&t);
    printf("\n Enter Value of R:");
    scanf("%d",&r);
    interest=a*t*r/100;
    printf("\n INTEREST=%D",interest);
    return 0;
}