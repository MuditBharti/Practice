#include <stdio.h>

long int rec (int n);

int main()
{
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, rec(n));
    
    return 0;
}

long int rec(int n)
{
    
    if(n>=1)
     return n*rec(n-1);
    else 
     return 1;
    
}
