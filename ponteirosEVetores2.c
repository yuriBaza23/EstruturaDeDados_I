#include <stdio.h>

int main(void) {
  int v[4] = {1,2,3,4};
  int* p = v;
  int* w = v+2;
  printf("&v: %u\n", (int)&v);
  printf("p: %u\n", (int)p);
  printf("&v+2: %u\n", (int)&v[2]);
  printf("w: %u\n\n", (int)w);

  printf("sizeof(v): %lu\n\n", sizeof(v));

  printf("v[0]: %u\n", (int)v[0]);
  printf("v[1]: %u\n", (int)v[1]);
  printf("v[2]: %u\n", (int)v[2]);
  printf("v[3]: %u\n\n", (int)v[3]);

  *v = 100;
  *(v+1) = 200;

  printf("v[0]: %u\n", (int)v[0]);
  printf("v[1]: %u\n", (int)v[1]);
  printf("v[2]: %u\n", (int)v[2]);
  printf("v[3]: %u\n\n", (int)v[3]);

  p[0] = 10;
  p[1] = 20;

  printf("v[0]: %u\n", (int)v[0]);
  printf("v[1]: %u\n", (int)v[1]);
  printf("v[2]: %u\n", (int)v[2]);
  printf("v[3]: %u\n\n", (int)v[3]);
}