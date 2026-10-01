#include <stdio.h>

int main() {

    float a,b,c;
    printf("Enter 1st number: \n");
    scanf("%f", &a);
    printf("Enter 2nd number:\n");
    scanf("%f", &b);
    printf("Enter 3rd number:\n");
    scanf("%f", &c);
    
    if(a>b)
        if (a>c)
         printf("1st is the largest number\n");
        else 
         printf("3rd is the largest number\n");
    else
        if(b>c)
        printf("2nd is the largest number\n");
        else
        printf("3rd is the largest number\n");



    return 0;
}
