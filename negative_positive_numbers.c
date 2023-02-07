// Determination of Negative and Positive Numbers
#include<stdio.h>
int main ()
{
    int num;
    printf("\n Enter Value of Num:");
    scanf("%d",&num);
    if(num==0){
        printf("\n num is neither positive nor negative:");
    }
   if(num>0) {
       printf("\n num is positive:");
   }
   else{
       printf("\n num is negative:");
   }
   return 0;
}