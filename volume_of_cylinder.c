// Volume of a Cylinder
# include <stdio.h>
int main ()
{
    float radius,height,volume;
    printf("\n Enter value of radius and height:");
    scanf("%f,%f",&radius,&height);
    volume=3.142*(radius*radius)*height;
    printf("\n volume=%f",volume);
    return 0;
}