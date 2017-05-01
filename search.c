/* This is the program to search for a given number using binary search */

#include <stdio.h>
void main()
{
int array[20];
int i, low, mid, high, key, size;
printf("Enter the size of an array\n");
scanf("%d", &size);
printf("Enter the array elements\n");
for (i = 0; i < size; i++)
{
 scanf("%d", &array[i]);
}
printf("Enter the key\n");
scanf("%d", &key);
low = 0;
high = (size - 1);
while (low <= high)
{
 mid = (low + high) / 2;
 if (key == array[mid])
  {
   printf("the element is present in the array\n");
   return;
  }
 if (key < array[mid])
   high = mid - 1;
 else
   low = mid + 1;
}
printf("the element is not present in the array\n");
}

