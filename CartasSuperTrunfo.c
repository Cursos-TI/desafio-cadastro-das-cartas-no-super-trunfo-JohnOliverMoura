#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    printf("Desafio Super trunfo 'países':\n" );
	printf("Bem vindo(a) ao jogo Super Trunfo Países. Vamos iniciar com a sua Carta 1.\n");
	
	//introduzindo as variáveis da carta:01
	
	char estado;
	char codigoDacarta[20];
	char nomeDacidade[20];
	int populacao;
	float area;
	float pib;
	int pontosTuristicos;
	
	//Introduzindo as variáveis da carta:02
	
	char estado2;
	char codigoDacarta2[20];
	char nomeDacidade2[20];
	int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	
	//Iniciando a interao com o usurio
	
	printf("Insira uma letra de 'A' a 'H' para representar o estado escolhido para sua preimeira carta:\n");
	scanf("%c", &estado);
	
	//interação aleatória para tornar o jogo mais atrativo
		printf("Escolha interessante!\n");
	
	printf("Escolha o codigo da sua carta. Adicione a letra escolhida a um numero de 01 a 06. Ex 'A01':\n");
	scanf("%s", &codigoDacarta);
	
	//interação 
	
		printf("Boa!\n");

	printf("Agora escolha o nome da cidade, dentro do estado escolhido inicialmente para compor a sua carta 1:\n");
	scanf("%s", &nomeDacidade);
	
	//interação
		printf("Otima escolha!\n");
		
	printf("Qual a populacao dessa cidade?\n");
	scanf("%d", &populacao);
	
 	//interação
 		printf("Isso ai!\n");
 		
	printf("Me conte agora a area total da cidade:\n");
	scanf("%f", &area);
	
	//interação
		printf("Muito bem!\n");
		
	printf("Qual o PIB da cidade?\n");
	scanf("%.3f", &pib);
	
	printf("Quantos pontos turisticos tem essa cidade?\n");
	scanf("%d", pontosTuristicos);
	

    
    //Conferindo os dados fornacidos pelo usurio
	    printf("\n");
	
	printf("Estado: %s\n", estado);
	printf("Codigo da carta: %s\n", codigoDacarta);
	printf("Nome da cidade: %s\n", nomeDacidade);
	printf("Moradores: %d\n", populacao);
	printf("Area total: %f\n", area);
	printf("PIB: %f\n", pib);
	printf("Pontos turisticos: %i\n", pontosTuristicos);
			
			
 	printf("Vamos montar a sua carta 2\n");
 	
 	printf("Escolha o estado:\n");
 	scanf("%s", estado2);
	

    return 0;
}
