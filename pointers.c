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

//float variable e creation
float e;
float* ptrtoe;

ptrtoe = &e;

// initializing variable e
e = 12.12;

// displaying value/address of e via printf
  printf("The value of e is %f\n", e);

  printf("The value of ptrtoe is %p\n", (void*)ptrtoe);
  printf("It stores the value of %f\n", *ptrtoe);
  printf("The address of e is %p\n", (void*)&e);

// float variable d creation
float d;
float* ptrtod;

ptrtod = &d;

// initializing variable d
d = 22.22;

// displaying value/address of d via printf
  printf("The value of d is %f\n", d);
  printf("The value of ptrtod is %p\n", (void*)ptrtod);
  printf("It stores the value of %f\n", *ptrtod);
 printf("The address of d is %p\n", (void*)&d);

// swapping variables via pointers
  *ptrtod = 12.12;
  *ptrtoe = 22.22;
  printf("The value of d is %f\n", d); 
  printf("The value of e is %f\n", e);
}
