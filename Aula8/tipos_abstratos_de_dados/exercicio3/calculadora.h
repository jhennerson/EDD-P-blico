//Biblioteca calculadora.h

/*Recebe dois valores reais (float) e um caractere (char) e realiza a opera��o entre os valores de acordo
  com o valor do caractere recebido (+ = soma,- = subtra��o,* = multiplica��o e / = divis�o) */
float calcula(float numeroA, float numeroB, char op);

//Imprime na tela op��es de caracteres e retorna 'c', 'a', 'n', 's' ou imprime VALOR INV�LIDO
char recebeComando();

//Imprime na tela op��es de simbolos e retorna '+', '-', '*', '/' ou imprime VALOR INV�LIDO
char recebeOperador();

//L� um n�mero do teclado e retorna seu valor como float
float recebeNumero();

//Imprime o cabe�alho do programa
void cabecalho(void);
