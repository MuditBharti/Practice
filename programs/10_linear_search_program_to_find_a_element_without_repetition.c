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
