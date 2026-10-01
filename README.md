
All Programs done in c language:


//1.	Illiterate men and women:
  #include <stdio.h>
int main() {

    float t,l,i,m,w,tm,tw,tlm,tlw,tim,tiw,p,q,tl;
    printf("Enter total population:\n ");
    scanf("%f", &t);
    printf("Enter total percentage literacy:\n ");
    scanf("%f", &l );
    printf("Enter total percentage men: \n");
    scanf("%f", &m);
    printf("Enter total percentage of literate men: \n");
    scanf("%f", &tlm);
    tl = (t*l)/100;
    tm = (m*t)/100;
    p = (tlm*t)/100;
    tim = tm - p;
    printf("Total Illiterate men: %f\n", tim);
    
    tw = t - tm;
    q = tl - p;
    tiw = tw - q;

    printf("Total Illiterate women: %f\n", tiw);
    
    return 0;
}

//2.	 Else if program to calculate average and display grade on basis of it:

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

//3.	 Factorial of a number:

#include <stdio.h>

int main() {

   long int i,f,num;
    f=1;
    
    printf("enter number : ");
    scanf("%ld",&num);
    //for(i=1;i<=num;i++)
    for(i=num;i>=1;i--)
    f=f*i;

    printf("\n factorial is %ld ",f);
    return 0;
}

//4.	 Largest between 3digits:

#include <stdio.h>

int main() {

    float a,b,c;
    printf("Enter 1st number: \n");
    scanf("%f", &a);
    printf("Enter 2nd number:\n");
    scanf("%f", &b);
    printf("Enter 3rd number:\n");
    scanf("%f", &c);
    
    if(a>b)
        if (a>c)
         printf("1st is the largest number\n");
        else 
         printf("3rd is the largest number\n");
    else
        if(b>c)
        printf("2nd is the largest number\n");
        else
        printf("3rd is the largest number\n");



    return 0;
}


//5.	To determine if a point is in X-Axis,Y-Axis or origin:

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

//6.	To find a number1 to the power of number 2:

#include <stdio.h>

int main() {

    int p,i,num1,num2;
    printf("Enter 1st number:\n");
    scanf("%d", &num1);
    printf("Enter 2nd number: \n");
    scanf("%d", &num2 );
    
    p = 1;   
    i = 1;
    while(num2 >= i)
    {
        p = p*num1;
        i++;
        
    }
        printf("Number:%d\n", p);


    return 0;
}

//7.	Largest and smallest number and its position in a array:

#include <stdio.h>

int main() {

     int arr[20] , i, small, large,n,bigpos,smallpos;
    
     printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("\n Now Enter elements :\n ");
     for(i=1;i<=n;i++)
     scanf("%d", &arr[i]);
    small = arr[1];
    large = arr[1];
    
    for (i = 1; i <=n; i++)
    {
        if (arr[i] <= small)
        {
            small = arr[i];
               smallpos=i;  
        }
        if (arr[i] >= large)
        {
            large = arr[i];
          bigpos  = i;
        }
    }
    printf("Largest element is : %d\n  Largest element position is %d\n", large,bigpos);
    printf("Smallest element is : %d\n" "Smallest element position is %d\n", small,smallpos);
    



    return 0;
}

//8.	  Unsigned Char:


#include <stdio.h>

int main() {
    
   unsigned char ch;
   for(ch = 0;ch<=254;ch++)
   printf("\n%d%c",ch,ch);
    
    printf("\n%d%c",ch,ch);
    return 0;
}
//9.	All data types revised:

#include <stdio.h>

int main() {

    char c;
    unsigned char d;
    int i;
    unsigned int j;
    short int k;
    unsigned short int l;
    long int m;
    unsigned long int n;
    float x;
    double y;
    long double z;
    
    scanf("%c%c", &c,&d);
    printf("%c %c", c,d);
    
    scanf("%d%u",&i,&j);
    printf("%d,%u",i,j);
    
    scanf("%d%u", &k,&l);
    printf("%d,%u",k,l);
    
    scanf("%ld%lu", &m,&n);
    printf("%ld%lu", m,n);
    
    scanf("%f%lf%Lf", &x,&y,&z);
    printf("%f%lf%Lf", x,y,z);
    
    
    return 0;
}

//10.	Linear search program to find a element without repetition:

#include <stdio.h>

int main()
{
    
    int a[20],item, i,found,n;
        found=0;
        printf("enter total number of elements ");
        scanf("%d",&n);
        printf("\n now enter elements \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]); 
        printf("\nEnter Item which is to be searched\n");  
        scanf("%d",&item);  
    for (i = 1; i<=n; i++)  
    {  
        if(a[i] == item)   
        {  
           printf("\n found at %d location",i);
            found=1;
            break;  
        }   
        
    }
    if(found == 0)    
        printf("\nItem not found\n");
    return 0;
}

//11.	Linear search with repeat of a number:

#include<stdio.h>   

void main ()  
{  
    int a[20],item, i,found,n,count;
    found=0;
    count=0;
        printf("enter total number of elements ");
        scanf("%d",&n);
        printf("\n now enter elements \n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]); 
        printf("\nEnter Item which is to be searched\n");  
        scanf("%d",&item);  
    for (i = 1; i<=n; i++)  
    {  
        if(a[i] == item)   
        {  
           printf("\n found at %d location",i);
            found=1;
            count++;  
        }   
        
    }
    if(found == 0)    
        printf("\nItem not found\n");   
    else
      printf("\n found for %d times ",count);   

}   

//12.	Binary element search:

#include <stdio.h>

int main()
{
    
    int c, first, last, middle, n, search, array[100];

        printf("Enter number of elements \n");
        scanf("%d", &n);

        printf("Enter %d integers in sorted order \n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

        printf("Enter value to find\n");
        scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
    if (array[middle] < search)
        first = middle + 1;
    else if (array[middle] == search) 
    {
        printf("%d found at location %d.\n", search, middle+1);
        break;
    }
    else
        last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    

    return 0;
}

//13.	Sorting- Ascending order:

#include <stdio.h>

int main()
{
  
    int array[5], n, c, d, swap;

        printf("Enter number of elements\n");
        scanf("%d", &n);

        printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (array[d] > array[d+1])
            {
            swap       = array[d];
            array[d]   = array[d+1];
            array[d+1] = swap;
            } 
        }
    } 

        printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);

    return 0;
}

//14.	Function program for average of 3 numbers:

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



//15.	Factorial of  a number using functions:
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

//16.	Call by Value:

#include <stdio.h>

    void swapx(int x,int y);


int main()
{
    int a,b;
    
    printf("Enter 2 values:\n");
    scanf("%d%d", &a,&b);
    
    printf("\n Before calling:\n a = %d b = %d", a,b);
    
    swapx(a,b);
    
    printf("\n After calling:\n a = %d b = %d", a,b);
    

    return 0;
}

    void swapx(int x, int y)
    {
        
        int t;
        
        t = x;
        x = y;
        y = t;
        
        printf("\n Inside function:\n x = %d y = %d", x,y);
        
    }


//17.	Call by reference:

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

//18.	Recursion:

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

//19.	To calculate sum of digits of a 5 digit number: 

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

//20.	String  to enter multiple lines at once:

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



//21.	String of multiple lines ending with CTRL+Z:

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



//22.	Program to get character,words and lines:

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