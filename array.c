// 3D Array
# include <stdio.h>
int main ()
{
    int i,r,c;
    int a [3][3][3]={{{10,20,30},{40,50,60},{70,80,90}},
                        {{1,2,3},{4,5,6},{8,9,10}},
                        {{10,11,12},{9,7,8},{12,10,11}}};
for(i=0;i<3;i++)  
{
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("\n marks=%d",a [i][r][c]);
        }
    }
}
return 0;
}