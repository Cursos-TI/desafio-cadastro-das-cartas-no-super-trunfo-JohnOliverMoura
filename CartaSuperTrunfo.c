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
unsigned int populacao;
float area;
float pib;
int pontos_turisticos;
float desidadePopulacional;
float pibPercapita;
double superpoder;


float densidadeinvertida;


//Introduzindo as variáveis da carta:02

char estado_2[20];
char codigoDacarta_2[20];
char cidade_2[20];
unsigned int populacao_2;
float area_2;
float pib_2;
int pontosTuristicos_2;
float desidadePopulacional_2;
float pibPercapita_2;
double superpoder_2;


float densidadeinvertida_2;
int resultado;


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
    scanf("%u", &populacao);

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
     
     
     //atribuindo valor da variavel super poder 
     densidadeinvertida = 1 / desidadePopulacional;
     
     superpoder = (float)pib + populacao + pibPercapita + area + pontos_turisticos + densidadeinvertida;
     
     
     

             
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

     
    //Calculando os dados da Densidade populacional e o PIB per Capita da carta 02
     desidadePopulacional_2 = (float)populacao_2 / area_2;
     pibPercapita_2 = (float)pib_2 / populacao_2;
         
    
     //atribuindo valor da variavel super poder 
     densidadeinvertida_2 = 1 / desidadePopulacional;
     
     superpoder_2 = (float)pib + populacao + pibPercapita + area + pontos_turisticos + densidadeinvertida;

     resultado = populacao > populacao_2;
     //Conferindo os dados fornecidos pelo usuário Carta01.
     

            printf("\n");
            printf("Vamos conferir os dados. Carta 01\n");
     
            printf("Estado: %s\n", estado);
            printf("Código da carta: %s\n", CodigoDaCarta);
            printf("Cidade: %s\n", cidade);
            printf("Moradores: %u\n", populacao);
            printf("Area total: %f\n", area);
            printf("PIB: %f\n", pib);
            printf("Pontos turisticos: %i\n", pontos_turisticos);
            printf("Densidade populacional: %.2f\n", desidadePopulacional);
            printf("PIB per Capita: %.2f\n", pibPercapita);
            printf("Super Poder: %.3f\n", superpoder);
     
            printf("\n");
     
      printf("Dados da carta 02\n");


    //Conferindo os dados fornecidos pelo usuário Carta02.
     
             printf("\n");
     
             printf("Estado: %s\n", estado_2);
             printf("Código da carta: %s\n", codigoDacarta_2);
             printf("Cidade: %s\n", cidade_2);
             printf("Moradores: %u\n", populacao_2);
             printf("Area total: %f\n", area_2);
             printf("PIB: %f\n", pib_2);
             printf("Pontos turisticos: %i\n", pontosTuristicos_2);
             printf("Densidade populacional: %.2f\n", desidadePopulacional_2);
             printf("PIB per Capita: %.2f\n", pibPercapita_2);


        printf("\n");     
       //Comparando as cartas e determinando o vencedor 
             
printf("Agora iremos fazer o comparativo entre as cartas 01 e 02. Se o resultado maior for 1 a carta1 vence mas se o maior numero de resultado for 0 a carta2 vence\n");

        printf("\n");

        printf("carta 1 População total vs Carta 2 População: Ganhador é %d \n", resultado);
        printf("carta 1 Área total vs Carta 2 Área: Ganhador é: %d \n", (area > area_2));
        printf("carta 1 PIB vs Carta 2 PIB: Ganhador é: %d \n", (pib > pib_2));
        printf("carta 1 Pontos Turisticos vs Carta 2 Pontos Turisticos: Ganhador é: %d \n", (pontos_turisticos > pontosTuristicos_2));
        printf("carta 1 Densidade Populacional vs Carta 2 Densidade Populacional: Ganhador é: %d \n", (densidadeinvertida < densidadeinvertida_2));
        printf("carta 1 PIB per Capita vs Carta 2 PIB per Capita: Ganhador é: %d \n", (pibPercapita > pibPercapita_2));
        printf("Super poder Carta 1 vs Super poder carta 2: Ganhador é: %d \n", (superpoder > superpoder_2));
     
     
     
     
        return 0;
     
     
     
     
 }