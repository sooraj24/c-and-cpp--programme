/* This is a program to delete elements from the given array */

#include <stdio.h>
void main()
{
int v[10];
int i, n, pos, element, found = 0;
printf("Enter how many elements\n");
scanf("%d", &n);
printf("Enter the elements\n");
 for (i = 0; i < n; i++)
  {
   scanf("%d", &v[i]);
  }
printf("Input array elements are\n");
 for (i = 0; i < n; i++)
  {
   printf("%d\n", v[i]);
   }
printf("Enter the element to be deleted\n");
scanf("%d", &element);
 for (i = 0; i < n; i++)
  {
     if (v[i] == element)
      {
        found = 1;
        pos = i;
        break;
      }
  }
if (found == 1)
 {
  for (i = pos; i <  n - 1; i++)
   {
    v[i] = v[i + 1];
   }
  printf("The resultant array is \n");
   for (i = 0; i < n - 1; i++)
    {
     printf("%d\n", v[i]);
    }
  }
  else
   printf("Element %d is not found in the array\n", element);
}

