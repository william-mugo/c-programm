// Grading System
#include <stdio.h>
int main ()
{
    int chem,maths,bio,average;
    printf("\n Enter marks of chem,maths,bio:");
    scanf("%d,%d,%d",&chem,&maths,&bio);
    average=(chem+maths+bio)/3;
    if(average>=70&&average<=100)
    {
        printf("grade A");
    }
    else if(average>=60&&average<=69)
    {
        printf("grade B");
    }
    else if(average>=50&&average<=59)
    {
        printf("grade C");
    }
    
    else if(average>=40&&average<=49)
    {
        printf("grade D");
    }
    else if(average>=0&&average<=39)
    {
        printf("grade E");
    }
    return 0;
}