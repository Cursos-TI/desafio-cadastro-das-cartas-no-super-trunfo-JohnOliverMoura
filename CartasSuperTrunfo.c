#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    printf("Desafio 'Super trunfo paises':\n" );
	printf("Bem vindo(a) ao jogo Super Trunfo Paises. Vamos iniciar com a sua Carta 1.\n");
	
	//introduzindo as variavis da carta:01
	
	char estado[20];
	char codigoDacarta[20];
	char nomeDacidade[20];
	int populacao;
	float area;
	float pib;
	int pontos_turisticos;
	
	//Introduzindo as variavis da carta:02
	
	char estado2[20];
	char codigoDacarta2[20];
	char nomeDacidade2;
	int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	
	//Iniciando a interao com o usurio
	
	printf("Insira o nome do estado escolhido para ser sua preimeira carta:\n");
	scanf("%s", &estado);
	
	//intereo aleatria para tornar o jogo mais atrativo
		printf("Escolha interessante!\n");
	
	//Retorno 
	
	printf("Escolha o codigo da sua carta A01 ou B01:\n");
	scanf("%s", &codigoDacarta);
	
	//interao 
	
		printf("Boa!\n");
	
	//retono
	printf("Agora escolha o nome da cidade, dentro do estado escolhido inicialmente para compor a sua carta 1:\n");
	scanf("%s", &nomeDacidade);
	
	//interao
		printf("Otima escolha!\n");
		

	printf("Qual a populacao dessa cidade?\n");
	scanf("%d", &populacao);
	
 	//interao
 		printf("Isso ai!\n");
 		

	printf("Me conte agora a area total da cidade:\n");
	scanf("%f", &area);
	
	//interao
		printf("Muito bem!\n");
		

	printf("Qual o PIB da cidade?\n");
	scanf("%f", &pib);
	
	//interao
		printf("Uaaau!\n");
	
	printf("Quantos pontos turisticos tem essa cidade?\n");
	scanf("%i", pontos_turisticos);
	
	//interao
		printf("Excelente, chegamos ao final da sua primeira carta. Vamos agora cinfirmar todos os dados da sua carta 1.\n");
		
	//Conferindo os dados fornacidos pelo usurio
	
	printf("\n");
	
			printf("Estado: %s\n", estado);
			printf("Codigo da carta: %s\n", codigoDacarta);
			printf("Nome da cidade: %s\n", nomeDacidade);
			printf("Moradores: %d\n", populacao);
			printf("Area total: %f\n", area);
			printf("PIB: %f\n", pib);
			printf("Pontos turisticos: %i\n", pontos_turisticos);
			
			
 	printf("Vamos montar a sua carta 2\n");
 	
 	printf("Escolha o estado:\n");
 	scanf("%s", estado2);
	

    return 0;
}
