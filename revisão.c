// Ponteiro armazena um endereço de memória
// Todas as váriaveis possuem: TIPO, NOME, VALOR, ENDEREÇO
int qtde = 30; // Tipo inteiro, diz qual o tamanho que deve ser reservado na memória: UM INTEIRO TEM 4 BYTES (Em 4 quadrados é armazenado o 30)
// &qtde devolve o endereço de memória que a variável inteira se localiza, o endereço é do tipo ponteiro de inteiro.

int x = 20; // x tem o tipo inteiro e valor 20. O x foi alocado apartir de algum endereço
int y, s; // só foi reservado seu endereço

y = 30; // O y possui o valor 30, do tipo enteiro, que é colocado no endereço reservado acima.
// &x revela o endereço de x

int a = 30;
int *p; // Criou um ponteiro
p = &a; // Pega o endereço de x

// print(a) = 30
// print(p) = endereço de a
// print(&a) = endereço de a
// print(*p) = 30
// print(&p) = endereço de p