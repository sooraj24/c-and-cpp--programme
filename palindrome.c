/* This is the program to find whether the given number is palindrome or not */

#include <stdio.h>

int main()
{
    int n , r , i, x;
    printf("enter the number : ");
    scanf("%d", &n);
    x = n;
while (n!=0)
{
    i = n%10;
    r = r * 10 + i;
    n = n/10;
}
if (x == r)
printf("%d is palindrome",x);
else 
printf("%d is not palindrome", x);
    return 0;
}

