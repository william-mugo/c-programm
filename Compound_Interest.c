// Calculation of Compound Interest
#include<stdio.h>
#include<math.h>
int main ()
{
    float t,n,r,p,interest;
    printf("Enter the Principal Amount:");
    scanf("%f",&p);
    printf("Enter the Time Value:");
    scanf("%f",&t);
    printf("Enter the Value of Rate:");
    scanf("%f",&r);
    interest= p*pow((1+r),t);
    //pow(2,8);
    printf("interest=%f",interest);
    return 0;
}