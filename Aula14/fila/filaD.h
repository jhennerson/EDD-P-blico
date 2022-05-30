/*ALUNO: Jhennerson Barbosa da Silva
  MATRICULA: GU3020461*/

typedef struct aluno {
    int matricula;
    float n1, n2, n3;
}ALUNO;

typedef struct fila Fila;

typedef struct elemento Elem;

Fila *cria_fila();

void destroi_fila(Fila *fi);

int tamanho_fila(Fila *fi);

int fila_cheia(Fila *fi);

int fila_vazia(Fila *fi);

int insere_fila(Fila *fi, ALUNO al);

int remove_fila(Fila *fi);

int consulta_fila(Fila *fi, ALUNO *al);
