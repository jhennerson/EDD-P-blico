//Exercício 4

void funcao_troca_inteiros(int *a, int *b) { // declaração da função com dois paramentros que são ponteiros de inteiros
    int *aux; // declaração de um ponteiro de inteiro auxiliar
    aux = (int*) malloc(sizeof(int)); // alocando a memória para uma string de inteiros dinamicamente com um tamanho de um inteiro (4 bytes)
    if(aux == NULL) { // condição de erro caso não seja possível alocar a memória (a função malloc retorna nulo quando há falha na solicitação de alocação de memória)
        printf("Memória insuficiente\n"); // imprime na tela a mensagem entre aspas para interagir com o usuário e informar o erro
        exit(1); // função do sistema operacional para sair e retornar o valor 1 que significa que o programa não foi executado com sucesso
    } else { // condição de sucesso na alocação da memória
        *aux = *a; // o espaço da memória do ponteiro *aux recebe o que há no espaço da memória do ponteiro *a
        *a = *b // o espaço da memória do ponteiro *a recebe o que há no espaço da memória do ponteiro *b
        *b = *aux; // o espaço da memória do ponteiro *b recebe o que há no espaço da memória do ponteiro *aux
        free(aux); // o espaço da memória do ponteiro *aux é liberado para o sistema
    }
}


void main() { // declaração da função principal
    char *p; // declaração de um ponteiro de caracteres p

    p = (char*) malloc(4*sizeof(char)); // alocando a memória para uma string de caracteres dinamicamente com um tamanho de quatro vezes o espaço ocupado por um caractere (1 byte * 4)
    strcpy(p, "IFSP"); // copiando o texto entre aspas para dentro do ponteiro *p
    p = (char*) realloc(p,15*sizeof(char));] // reformulando o tamanho do ponteiro *p para 15 vezes o tamanho de um byte (1 byte * 15)
    strcat(p, "-Guarulhos"); // adicionando ao final da ultima posição preenchida do ponteiro o conteúdo entre aspas
    printf("%s", p); // imprimindo o condeúdo da string *p realocada "IFSP-Guarulhos"
    free(p); // o espaço da memória do ponteiro *p é liberado para o sistema
}
