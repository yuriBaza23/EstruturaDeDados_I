#include <stdio.h>

int main(void){
    int v1[2] = {1,2};
    int v2[2] = {3,4};
    int* m[2];
    m[0] = v1;
    m[1] = v2;

    printf("*(*m+0) + 0:%d\n", *(*m+0) + 0);
    printf("*(*m+0) + 1:%d\n", *(*m+0) + 1);
    printf("*(*m+1) +1:%d\n", *(*m+1) + 1);
    printf("*(*m+1) + 2:%d\n", *(*m+1) + 2);
    printf("*(m+0):%d\n", *(m+0));
    printf("*(m+0) + 1:%d\n", *(m+0) + 1);
    printf("*(m+1):%d\n", *(m+1));
    printf("*(m+1) + 1:%d\n", *(m+1) + 1);
    printf("m[0][0]:%d\n", m[0][0]);
    printf("m[0][1]:%d\n", m[0][1]);
    printf("m[1][0]:%d\n", m[1][0]);
    printf("m[1][1]:%d\n", m[1][1]);
}