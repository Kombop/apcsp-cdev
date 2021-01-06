#include<stdio.h>

int main()
{
  int a = 545;
  char c = 'a';
  float b = 1.22222;
  double d = 1.2222222222;
  unsigned int u = 2;
  short int s = 1;
  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));
  printf("float b value: %f and size: %lu bytes\n", b, sizeof(b));
  printf("double d value: %d and size: %lu bytes\n", d, sizeof(d));
  printf("unsigned int u value: %d and size: %lu bytes\n", u, sizeof(u));
  printf("short int s value: %d and size: %lu bytes\n", s, sizeof(s));
}

