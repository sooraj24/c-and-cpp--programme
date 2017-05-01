/* This is the program to search the given number from the array*/
/* Do linear search for the given numbers */

#include <stdio.h>
int main()
    {
     int a[10], m, n, i, c=0;
     printf("enter the size of array : ");
     scanf("%d",&n);
     printf("enter the numers in array : ");
     for (i=0; i <= n-1; i++)
     scanf("%d", &a[i]);
     
    printf("enter the number to search :");
    scanf("%d",&m);
    
    for (i=0; i <= n-1; i++)
     {
      if (a[i] == m)
       {
        c = 1;
        break;
       }
     if (c == 0)
          {
          printf("the number is not in the list");
          break;
          }
     else
     printf("the number is in the list");
     }
     return (0);
     }

