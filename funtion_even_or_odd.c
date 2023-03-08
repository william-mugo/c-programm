// Area of a Circle
# include<stdio.h>
float area (float a);
int main ()
{
    float r,result;
    printf("\n Enter Value of radius:");
    scanf("%f",&r);
    result=area (r);
    printf("result=%.2f",result);
    return 0;
}
// fuction definition
float area (float a)
 {
    float pi=3.142;
    float c = pi*a*a;
    return c;
}