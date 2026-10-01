#include <stdio.h>

int main() {

    int p,i,num1,num2;
    printf("Enter 1st number:\n");
    scanf("%d", &num1);
    printf("Enter 2nd number: \n");
    scanf("%d", &num2 );
    
    p = 1;   
    i = 1;
    while(num2 >= i)
    {
        p = p*num1;
        i++;
        
    }
        printf("Number:%d\n", p);


    return 0;
}
