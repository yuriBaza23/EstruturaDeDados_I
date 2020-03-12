#include <stdio.h>

int main(void) {
  
    int v[4] = {1,2,3,4};
    int* p = v;
    int* w = v+2;

    printf("v[0]: %u\n", (int)v[0]);
    printf("v[1]: %u\n", (int)v[1]);
    printf("v[2]: %u\n", (int)v[2]);
    printf("v[3]: %u\n", (int)v[3]);

    printf("v: %u\n", (int)v);
    printf("p: %u\n", (int)p);
    printf("&v[0]: %u\n", (int)&v[0]);
    printf("&v[1]: %u\n", (int)&v[1]);
    printf("&v[2]: %u\n", (int)&v[2]);
    printf("&v[3]: %u\n", (int)&v[3]);

    printf("sizeof(v): %lu\n", sizeof(v));

    /****************************/
    printf("\nUm vetor pode ser manipulado como um ponteiro\n");

    *v = 100;
    *(v+1) = 200;
    printf("v[0]: %u\n", (int)v[0]);
    printf("v[1]: %u\n", (int)v[1]);
    /****************************/
    printf("\nUm ponteiro pode ser manipulado como vetor\n");

    p[0] = 10;
    p[1] = 20;
    printf("p[0]: %u\n", (int)p[0]);
    printf("p[1]: %u\n", (int)p[1]);
    /****************************/
    printf("\nDiferentes forma de acessar a posicao 2 do vetor\n");

    p[2] = 30;
    *(p + 2) = 30;

    v[2] = 30;
    *(v + 2) = 30;

    *w = 30;
    *(w+2) = 30;
    w[2] = 30;

   printf("p[2]: %u\n", (int)p[2]);
   printf("v[2]: %u\n", (int)v[2]);
   printf("w[2]: %u\n", (int)w[2]); 

   /****************************/ 
   printf("\nFunciona como negativo também\n");

    w[-1] = 500;
    *(w -1) = 600;

    printf("w[-1]: %u\n", (int)w[-1]);
    /****************************/



// int i = 30;
// int* x = &i;
// printf("i: %u\n", (int)i);
// printf("*x: %u\n", (int)*x);
// printf("x[0]: %u\n", (int)x[0]);








}