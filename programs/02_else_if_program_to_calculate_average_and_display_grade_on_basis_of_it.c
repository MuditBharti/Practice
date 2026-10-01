#include <stdio.h>

int main() {
   
    float a,b,c,d,e,sum,avg;
    printf("Enter marks of 1st subject:\n");
        scanf("%f", &a);
    printf("Enter marks of 2nd subject:\n");
        scanf("%f", &b);
    printf("Enter marks of 3rd subject:\n");
        scanf("%f", &c);
    printf("Enter marks of 4th subject:\n");
        scanf("%f", &d);
    printf("Enter marks of 5th subject:\n");
        scanf("%f", &e);
    
    sum = a+b+c+d+e;
    avg = sum/5;
    
    printf("Average: %f\n", avg);
    
    if(avg>=80)
            printf("Merit");
        else if(avg>=70)
            printf("A");
        else if(avg>=60)
            printf("B");
        else if(avg>=50)
            printf("C");
        else if (avg>=40)
            printf("Passed");
    else 
    printf("Failed");
    
    
    return 0;
}
