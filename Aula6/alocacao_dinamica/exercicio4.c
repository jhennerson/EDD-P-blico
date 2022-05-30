//Exerc�cio 4

void funcao_troca_inteiros(int *a, int *b) { // declara��o da fun��o com dois paramentros que s�o ponteiros de inteiros
    int *aux; // declara��o de um ponteiro de inteiro auxiliar
    aux = (int*) malloc(sizeof(int)); // alocando a mem�ria para uma string de inteiros dinamicamente com um tamanho de um inteiro (4 bytes)
    if(aux == NULL) { // condi��o de erro caso n�o seja poss�vel alocar a mem�ria (a fun��o malloc retorna nulo quando h� falha na solicita��o de aloca��o de mem�ria)
        printf("Mem�ria insuficiente\n"); // imprime na tela a mensagem entre aspas para interagir com o usu�rio e informar o erro
        exit(1); // fun��o do sistema operacional para sair e retornar o valor 1 que significa que o programa n�o foi executado com sucesso
    } else { // condi��o de sucesso na aloca��o da mem�ria
        *aux = *a; // o espa�o da mem�ria do ponteiro *aux recebe o que h� no espa�o da mem�ria do ponteiro *a
        *a = *b // o espa�o da mem�ria do ponteiro *a recebe o que h� no espa�o da mem�ria do ponteiro *b
        *b = *aux; // o espa�o da mem�ria do ponteiro *b recebe o que h� no espa�o da mem�ria do ponteiro *aux
        free(aux); // o espa�o da mem�ria do ponteiro *aux � liberado para o sistema
    }
}


void main() { // declara��o da fun��o principal
    char *p; // declara��o de um ponteiro de caracteres p

    p = (char*) malloc(4*sizeof(char)); // alocando a mem�ria para uma string de caracteres dinamicamente com um tamanho de quatro vezes o espa�o ocupado por um caractere (1 byte * 4)
    strcpy(p, "IFSP"); // copiando o texto entre aspas para dentro do ponteiro *p
    p = (char*) realloc(p,15*sizeof(char));] // reformulando o tamanho do ponteiro *p para 15 vezes o tamanho de um byte (1 byte * 15)
    strcat(p, "-Guarulhos"); // adicionando ao final da ultima posi��o preenchida do ponteiro o conte�do entre aspas
    printf("%s", p); // imprimindo o conde�do da string *p realocada "IFSP-Guarulhos"
    free(p); // o espa�o da mem�ria do ponteiro *p � liberado para o sistema
}
