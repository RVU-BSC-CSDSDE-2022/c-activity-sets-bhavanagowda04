#include <stdio.h>

int main() 
{
   int a, b, c;

   a = 1;
   b = 2;
   c = 3;

   if ( a > b && a > c )
      printf("%d is the largest.", a);
   else if ( b > a && b > c )
      printf("%d is the largest.", b);
   else if ( c > a && c > b )
      printf("%d is the largest.", c);
   else   
      printf("Values are not unique");

   return 0;
}