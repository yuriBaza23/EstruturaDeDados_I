#include <stdio.h>

int main(void){
    //Declara variaveis
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    //Queremos armazenar ponteiros de inteiro em cada espaço
    int* v[4];

    //P é um ponteiro de ponteiro de inteiro. Nele há o endereço do vetor
    int** p = v;

    //a na posição 0 é igual ao endereço de a
    v[0] = &a; //OU p[0] = &a OU *(v+0) = &a
    v[1] = &b;
    v[2] = &c;
    v[3] = &d;

    for(int i = 0; i < 4; i++){
        printf("v[%d]: %d\n", i, v[i]); //Conteudo de cada espaço (endereços das variaveis que são inteiros - 4 BITS) 
        printf("&v[%d]: %d\n", i, &v[i]); //Endereço de cada espaço DO VETOR (que são ponteiros - 8 BITS)
        printf("*v[%d]: %d\n", i, *v[i]); //Acessa o conteúdo que cada espaço do vetor aponta
        printf("**(p + %d): %d\n", i, **(p+i)); //Acessa o conteúdo que cada espaço do vetor aponta
    };
}