#include <stdio.h>

    float average(float,float,float);

int main()
{

    float a,b,c,avg;
    
    printf("Enter 1st number:\n");
    scanf("%f", &a);
    
    printf("Enter 2nd number:\n");
    scanf("%f", &b);
    
    printf("Enter 3rd number:\n");
    scanf("%f", &c);
    
    avg = average(a,b,c);

    
    printf("Average is %f\n", avg);
    
    return 0;
}

    float average(float x,float y,float z)
    {
        
        return(x+y+z)/3 ;
    }
