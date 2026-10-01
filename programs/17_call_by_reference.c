#include <stdio.h>

void swapx(int*x,int*y)
{
    
    int t;
    
    t = *x;
    *x = *y; 
    *y = t;
    
    printf("\n Inside function: \n x = %d y = %d", *x, *y);
    
}

int main()
{
    int a,b;
    
    printf("Enter 2 values:\n");
    scanf("%d%d",&a,&b );
    
    printf("\n Before calling: \n a = %d b = %d", a,b);
    
    swapx(&a,&b);

    printf("\n Inside the caller: \n a = %d b = %d", a,b);


    return 0;
}
