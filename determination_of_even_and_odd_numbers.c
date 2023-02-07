// Determination of Even and Odd Numbers
#include <stdio.h>
int main() {
    int num;
    printf("Enter Value of num: ");
    scanf("%d",&num);
    // true if num is divisible by 2
    if(num%2==0){
        printf("num is even:");
    }
    else{
        printf("num is odd:");
    }
    return 0;
}
