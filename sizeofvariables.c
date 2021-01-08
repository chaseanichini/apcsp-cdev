#include<stdio.h>

int main()
{
  int a = 545;
  float b = 37.4;
  double c = 7.93;
  char d = 'F';
  unsigned int e = 3;
  short int f = 1;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("int b value: %d and size: %lu bytes\n", b, sizeof(b));
  printf("int c value: %d and size: %lu bytes\n", c, sizeof(c));
  printf("int d value: %d and size: %lu bytes\n", d, sizeof(d));
  printf("int e value: %d and size: %lu bytes\n", e, sizeof(e));
  printf("int f value: %d and size: %lu bytes\n", f, sizeof(f));
}

