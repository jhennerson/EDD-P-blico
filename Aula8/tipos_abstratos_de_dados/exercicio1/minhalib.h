//Biblioteca minhalib

/*fun��o que calcula as vantagens que ser�o recebidas pelo funcion�rio cadastrado, recebendo como par�metros
 os seguintes valores do tipo int: numero de horas trabalhadas(numeroHoras), valor do sal�rio/hora(salarioHora),
 quantidade de filhos(numeroFilhos), valor por filho(valorPorFilho) e um ponteiro para o valor
 das vantagens retornando um ponteiro para o valor total das vantagens*/
int calculoVantagens(int numeroHoras,int salarioHoras,int numeroFilhos,int valorPorFilho, int *vantagens);


/*fun��o que calcula o valor das dedu��es recebendo como par�metros os seguintes valores do tipo int: valor do
 sal�rio bruto(salarioBruto), percentual da taxa do imposto de renda(taxaIR) e um ponteiro para o valor das dedu��es
 retornando um ponteiro para o valor total das dedu��es*/
float calculoDeducoes(int salarioBruto, int taxaIR, int *deducoes);
