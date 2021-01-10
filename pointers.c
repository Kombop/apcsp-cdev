#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);
  
  float d;
  float e;
  float* ptrtod;
  float* ptrtoe;
  
  ptrtod = &d;
  ptrtoe = &e;
  
  d = 5.555;
  e = 3.333;
  printf("value of d is %f\n", d);
  printf("value of e is %f\n", e);

  printf("address of d is %p\n", (void*)&d);
  printf("address of e is %p\n", (void*)&e);

  float temp;

  temp = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = temp;

  printf("value of d switched to %f\n", d);
  printf("value of e switched to %f\n", e);
}
