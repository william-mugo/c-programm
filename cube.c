// Cube of Given Integer
# include <stdio.h>
int main ()
{
    int num=0;
    do
    {
        printf("\n %d ",num);
        num=num+1;
        printf("Number is %d and cube of the %d is %d,\n",num,num,(num*num*num));
    }
        while(num<=4);
    return 0;
}