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
