//Biblioteca calculadora.h

/*Recebe dois valores reais (float) e um caractere (char) e realiza a operação entre os valores de acordo
  com o valor do caractere recebido (+ = soma,- = subtração,* = multiplicação e / = divisão) */
float calcula(float numeroA, float numeroB, char op);

//Imprime na tela opções de caracteres e retorna 'c', 'a', 'n', 's' ou imprime VALOR INVÁLIDO
char recebeComando();

//Imprime na tela opções de simbolos e retorna '+', '-', '*', '/' ou imprime VALOR INVÁLIDO
char recebeOperador();

//Lê um número do teclado e retorna seu valor como float
float recebeNumero();

//Imprime o cabeçalho do programa
void cabecalho(void);
