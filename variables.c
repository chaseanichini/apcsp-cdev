#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

  a = c;
  c = a - b;
  printf("a is now %d and c is now %d\n", a, c);
}
