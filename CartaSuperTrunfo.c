#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

printf("Desafio 'Super trunfo paises':\n" );
printf("Bem vindo(a) ao jogo Super Trunfo Paises. Vamos iniciar com a sua Carta 1.\n");

//Introduzindo as variáveis da carta:01

char estado[20];
char CodigoDaCarta[20];
char cidade[20];
int populacao;
float area;
float pib;
int pontos_turisticos;
float desidadePopulacional;
float pibPercapita;

//Introduzindo as variáveis da carta:02

char estado_2[20];
char codigoDacarta_2[20];
char cidade_2[20];
int populacao_2;
float area_2;
float pib_2;
int pontosTuristicos_2;
float desidadePopulacional_2;
float pibPercapita_2;


    //Interação com usuário, para torna o jogo mais dinâmico e comunicativo.
    printf("Escolha um estado para iniciarmos o Jogo:\n");
    scanf("%s", &estado);

    printf("Otima escolha!\n");
    
    printf("Agora escolha o código da sua carta, ele deve ser uma letra entre A e H, e um número entre 01 e 06. Exemplo: B03:\n");
    scanf("%s", &CodigoDaCarta);

        printf("Show!\n");
    
    printf("Escolha a cidade. Lembrando que ela deve ser uma cidade que está dentro do Estado escolhido:\n");
    scanf("%s", &cidade);

        printf("Muito bem:\n");
    
    printf("Qual a população dessa cidade?\n");
    scanf("%d", &populacao);

         printf("Isso ai!\n");
   
         printf("Me conte agora a area total da cidade em KM²:\n");
         scanf("%f", &area);
     
             printf("Muito bem!\n");
         
 
         printf("Qual o PIB da cidade?\n");
         scanf("%f", &pib);
     
             printf("Uaaau!\n");
     
         printf("Quantos pontos turisticos tem essa cidade?\n");
     scanf("%i", &pontos_turisticos);

     //Calculando os dados da Densidade populacional e o PIB per Capita da carta 01
     desidadePopulacional = (float)populacao / area;
     pibPercapita = (float)pib / populacao;
         
 
             
              printf("Vamos montar a sua carta 2\n");
      
      
      
     //Retomando interação 
         printf("Escolha um novo Estado para sua carta 2:\n");
         scanf("%s", &estado_2);
 
 
             printf("Boa escolha!\n");
         
         printf("Agora escolha o código da sua carta 2, lembrando que deve ser uma letra entre A e H, e um número entre 01 e 06. E deve ser diferente da carta 1:\n");
         scanf("%s", &codigoDacarta_2);
     
             printf("Isso ai!\n");
         
         printf("Escolha a cidade. Lembrando que ela deve ser uma cidade que está dentro do Estado escolhido:\n");
         scanf("%s", &cidade_2);
     
             printf("Mandou bem:\n");
         
         printf("Qual a população dessa cidade?\n");
         scanf("%d", &populacao_2);
     
 
         printf("Me conte agora a area total da cidade em KM²:\n");
         scanf("%f", &area_2);
     
             printf("Muito bem!\n");
         
 
         printf("Qual o PIB da cidade?\n");
         scanf("%f", &pib_2);
     
             printf("Legal!\n");
     
         printf("Quantos pontos turisticos tem essa cidade?\n");
         scanf("%i", &pontosTuristicos_2);

     //Calculando os dados da Densidade populacional e o PIB per Capita da carta 01
     desidadePopulacional_2 = (float)populacao_2 / area_2;
     pibPercapita_2 = (float)pib_2 / populacao_2;
         
    
     
     //Conferindo os dados fornecidos pelo usuário Carta01.
     

            printf("\n");
            printf("Vamos conferir os dados. Carta 01\n");
     
            printf("Estado: %s\n", estado);
            printf("Código da carta: %s\n", CodigoDaCarta);
            printf("Cidade: %s\n", cidade);
            printf("Moradores: %d\n", populacao);
            printf("Area total: %f\n", area);
            printf("PIB: %f\n", pib);
            printf("Pontos turisticos: %i\n", pontos_turisticos);
            printf("Densidade populacional: %.2f\n", desidadePopulacional);
            printf("PIB per Capita: %.2f\n", pibPercapita);
     
            printf("\n");
     
      printf("Dados da carta 02\n");


    //Conferindo os dados fornecidos pelo usuário Carta02.
     
             printf("\n");
     
             printf("Estado: %s\n", estado_2);
             printf("Código da carta: %s\n", codigoDacarta_2);
             printf("Cidade: %s\n", cidade_2);
             printf("Moradores: %d\n", populacao_2);
             printf("Area total: %f\n", area_2);
             printf("PIB: %f\n", pib_2);
             printf("Pontos turisticos: %i\n", pontosTuristicos_2);
             printf("Densidade populacional: %.2f\n", desidadePopulacional_2);
             printf("PIB per Capita: %.2f\n", pibPercapita_2);

             
     
     return 0;
     
     
     
     
 }