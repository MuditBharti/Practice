#include <stdio.h>

int main()
{
    
    int a,b,c,d,e,n,sum;
    
    printf("Enter a 5 digit number:\n");
    scanf(" %d", &n);
    
    if(n > 9999)
    {
        a = n%10;
        n = n/10;
        
        b = n%10;
        n = n/10;
        
        c = n%10;
        n = n/10;
        
        d = n%10;
        n = n/10;
        
        e = n%10;
        n = n/10;
        
        sum  = a+b+c+d+e;
        
        printf("Sum of the 5 digits is: %d", sum);
    }    
    
    else 
        printf("Kindly enter a valid 5 digit number.");


    return 0;
}
