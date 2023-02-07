// Eligibility To Voting
#include<stdio.h>
int main ()
{
    int citizenship,age;
    printf("\n Enter citizenship and age in years:");
    scanf("%d%d",&citizenship,&age);
    if("age>=18,citizenship==kenyan:"){
        printf("You qualify to vote");
    }
    else{
        print("Does not qualify to vote");
    }
    return 0;
}