#include <stdio.h>

int main()
{
    char str[500],c;
    int i = 0;
    printf("\nEnter multiple lines text and press control-z at last\n");
    
    while((c = getchar()) != EOF)
    {
        
        str[i] = c;
        i++;
    }
        
    printf("\nText you typed is\n");
    puts(str);

    return 0;
}
