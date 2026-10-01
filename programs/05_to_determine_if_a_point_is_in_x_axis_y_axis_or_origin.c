#include <stdio.h>

int main() {

    int x,y;
    printf("Enter a point:\n");
    scanf("%d%d", &x,&y);
    
    if(x > 0, y == 0)
    printf("Point lies on X-Axis");
    else
        if(x == 0 , y > 0)
        printf("Point lies on Y-Axis");
        else
            printf("Point lies on origin");


    return 0;
}
