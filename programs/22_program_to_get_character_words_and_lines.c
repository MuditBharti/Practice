#include<stdio.h>
#include<ctype.h>
main()
{
char s[581],c;
int words = 0,lines = 0, i =1, j;
printf("\nEnter text at end press control-z\n");
while((c = getchar()) != EOF)
{
 s[i] = c;
 ++i;
}
     i = i-1;
     s[i] = '\0';

     for (j=1;s[j] != '\0';++j)
     {
      if(s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
      ++words;
      if(s[j] == '\n')
      ++lines;
     }
     printf("Number of characters = %d\n",i);
     printf("Number of words = %d\n", words+1);
     printf("Number of lines = %d\n",lines+1);
}
