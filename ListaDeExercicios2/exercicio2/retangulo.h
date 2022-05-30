typedef struct ponto Ponto;

typedef struct retangulo Retangulo;

Retangulo *cria_retangulo(float xA, float yA, float xB, float yB);

void libera_retangulo(Retangulo *r);

float area(Retangulo *r);

float diagonal(Retangulo *r);

float perimetro(Retangulo *r);
