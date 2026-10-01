#include <stdio.h>

int main() {

   long int i,f,num;
    f=1;
    
    printf("enter number : ");
    scanf("%ld",&num);
    //for(i=1;i<=num;i++)
    for(i=num;i>=1;i--)
    f=f*i;

    printf("\n factorial is %ld ",f);
    return 0;
}
