#include <stdio.h>

int main()
{
    char c,str[500];
    
    int i = 0;
    printf("\nEnter multiple line text and press * key at last\n");
    
    while((c = getchar()) != '*')
    {
        
        str[i] = c;
        i++;
    }
    
    printf("Text you typed is\n");
    puts(str);
    

    return 0;
}
