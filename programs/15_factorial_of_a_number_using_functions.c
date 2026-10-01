#include <stdio.h>

    int fact(int);

int main()
{
    int a,f1;
    
    printf("Enter a number:\n");
    scanf("%d", &a);
    
    f1 = fact(a);
    
    printf("Factorial is %d", f1);
    

    return 0;
}

    int fact(int x)
    {
        
        int f,i;
        f = 1;
        
        for(i=1;i<=x;i++)
        f = f*i;
        return f;
        
    }
