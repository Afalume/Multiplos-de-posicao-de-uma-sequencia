#include <stdio.h> //aqui é importada a biblioteca
#include <stdlib.h> // aqui tambem é importada a biblioteca

int main(int argc, char *argv[]) { // esta é a função main ou seja a funçao principal da linguagemn C
	
	int i, x; // aqui estamos declarando nossas variaveis que serao usadas
	printf("Entre com o primeiro numero da sequencia ou zero:"); // aqui estamos imprimindo uma mensagem na tela
	scanf("%i", &x); // aqui é feita a entrada de um valor que sera armazenado na variavel x
	
	i=1; // aqui é feita a inicialização da variavel i com o valor 1
	while(x!=0){ // aqui é a nossa estrutura de repetição onde enquanto o valor em x for diferente de 0 sera executada as instrucoes dentro
		if(x%i==0){ // aqui é uma estrutura condicional onde a condição é se o resto da divisão de x com i for igual a zero entao sera imprimido o valor em x
			printf("%d",x); // é imprimido o valor em x
		}
		printf( "Entre com o proximo numero da sequencia ou zero: " ); // é imprimido uma mensagem
 		scanf ("%i",&x); // aqui sera lido um valor para variavel x
 		i = i + 1; // sera incrementado uma unidade a variavel i
	}
	return 0; // neste ponto indicamos o retorno da função main que neste caso é .
}
