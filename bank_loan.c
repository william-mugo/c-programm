// Qualification for Bank Loan
#include<stdio.h>
int main ()
{
    int salary,age;
    printf("\n Enter the Value of salary and age in years:");
    scanf("%d%f",&salary,&age);
    if("salary>=21000,age>=21:"){
        printf("Congratulation you qualify for a loan");
    }
    else{
        printf("Unfortunately,we are unable to offer you aloan at this time");
    }
    return 0;
}