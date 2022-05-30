//Biblioteca minhalib

/*função que calcula as vantagens que serão recebidas pelo funcionário cadastrado, recebendo como parâmetros
 os seguintes valores do tipo int: numero de horas trabalhadas(numeroHoras), valor do salário/hora(salarioHora),
 quantidade de filhos(numeroFilhos), valor por filho(valorPorFilho) e um ponteiro para o valor
 das vantagens retornando um ponteiro para o valor total das vantagens*/
int calculoVantagens(int numeroHoras,int salarioHoras,int numeroFilhos,int valorPorFilho, int *vantagens);


/*função que calcula o valor das deduções recebendo como parâmetros os seguintes valores do tipo int: valor do
 salário bruto(salarioBruto), percentual da taxa do imposto de renda(taxaIR) e um ponteiro para o valor das deduções
 retornando um ponteiro para o valor total das deduções*/
float calculoDeducoes(int salarioBruto, int taxaIR, int *deducoes);
