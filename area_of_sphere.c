// Area of a sphere
# include<stdio.h>
float area (float c);
int main ()
{
    float r,result;
    printf("\n Enter Value of radius:");
    scanf("%f",&r);
    result=area(r);
    printf("result=%.2f",result);
    return 0;
}
// Function determination
float area (float c )
{
    float pi=3.142;
    float d;
    d = c*c*pi*4;
    return d;
}