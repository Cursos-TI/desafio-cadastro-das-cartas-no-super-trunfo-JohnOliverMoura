#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 2 - Desenvolvendo a Lógica do Jogo
// Este código tem como objetivo criar a lógica do jogo e torna-lo mais atrativo para o usuário.

int main() {

    printf("************Desafio 'Super trunfo países':\n**************" );
    printf("Bem vindo(a) ao jogo Super Trunfo Países. Vamos iniciar com a sua Carta 1.\n");


    //Introduzindo as variáveis da carta:01

    char estado[20];
    char CodigoDaCarta[20];
    char cidade[20];
    long unsigned int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    float desidadePopulacional, densidadeinvertida;
    float pibPercapita;

    int atributo1, atributo2;
    float somafinal1, somafinal2;


    //Introduzindo as variáveis da carta:02

    char estado_2[20];
    char codigoDacarta_2[20];
    char cidade_2[20];
    long unsigned int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;

    float desidadePopulacional_2, densidadeinvertida_2;
    float pibPercapita_2;

    int resultado1, resultado2;


    //Interação com usuário, para torna o jogo mais dinâmico e comunicativo.
    printf("\n Escolha um estado para iniciarmos o Jogo:\n");
    scanf("%s", &estado);

    printf("Otima escolha!\n");
    
    printf("Agora escolha o código da sua carta, ele deve ser uma letra entre A e H, e um número entre 01 e 06. Exemplo: B03:\n");
    scanf("%s", &CodigoDaCarta);

        printf("Show!\n");
    
    printf("Escolha a cidade. Lembrando que ela deve ser uma cidade que está dentro do estado escolhido:\n");
    scanf("%s", &cidade);

        printf("Muito bem:\n");
    
    printf("Qual a população dessa cidade?\n");
    scanf("%lu", &populacao);

         printf("Isso ai!\n");
   
     printf("Me conte agora a área total da cidade em KM²:\n");
     scanf("%f", &area);
     
         printf("Muito bem!\n");
         
 
     printf("Qual o PIB da cidade?\n");
     scanf("%f", &pib);
     
         printf("Uaaau!\n");
     
     printf("Quantos pontos turísticos tem essa cidade?\n");
     scanf("%i", &pontos_turisticos);

     //Calculando os dados da Densidade populacional e o PIB per Capita da carta 01
     desidadePopulacional = (float)populacao / area;
     pibPercapita = (float)pib / populacao;
    
    
             
     printf("\n Vamos montar a sua carta 2\n");
      
      
      
     //Retomando interação 
     printf("\n Escolha um novo Estado para sua carta 2:\n");
     scanf("%s", &estado_2);
 
 
        printf("Boa escolha!\n");
         
     printf("Agora escolha o código da sua carta 2, lembrando que deve ser uma letra entre A e H, e um número entre 01 e 06. E deve ser diferente da carta 1:\n");
     scanf("%s", &codigoDacarta_2);
     
             printf("Isso ai!\n");
         
     printf("Escolha a cidade. Lembrando que ela deve ser uma cidade que está dentro do Estado escolhido:\n");
     scanf("%s", &cidade_2);
     
             printf("Mandou bem:\n");
         
     printf("Qual a população dessa cidade?\n");
     scanf("%lu", &populacao_2);
     
 
     printf("Me conte agora a area total da cidade em KM²:\n");
     scanf("%f", &area_2);
     
         printf("Muito bem!\n");
         
 
     printf("Qual o PIB da cidade?\n");
     scanf("%f", &pib_2);
     
         printf("Legal!\n");
     
     printf("Quantos pontos turísticos tem essa cidade?\n");
     scanf("%i", &pontosTuristicos_2);




    //Conferindo os dados fornecidos pelo usuário Carta 01.
     
    printf("\n");
    printf("\n Vamos conferir os dados da Carta 01 \n");

    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("Cidade: %s\n", cidade);
    printf("Moradores: %u\n", populacao);
    printf("Area total: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %i\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", desidadePopulacional);
    printf("PIB per Capita: %.2f\n", pibPercapita);
 



    printf("\n Dados da carta 02 \n");


    //Conferindo os dados fornecidos pelo usuï¿½rio Carta02.


    printf("Estado: %s\n", estado_2);
    printf("Código da carta: %s\n", codigoDacarta_2);
    printf("Cidade: %s\n", cidade_2);
    printf("Moradores: %u\n", populacao_2);
    printf("Area total: %f\n", area_2);
    printf("PIB: %f\n", pib_2);
    printf("Pontos turisticos: %i\n", pontosTuristicos_2);
    printf("Densidade populacional: %.2f\n", desidadePopulacional_2);
    printf("PIB per Capita: %.2f\n", pibPercapita_2);

 

    //Calculando os dados da Densidade populacional e o PIB per Capita da carta 02
    desidadePopulacional_2 = (float)populacao_2 / area_2;
    pibPercapita_2 = (float)pib_2 / populacao_2;
         
    
    //atribuindo valor da variavel densidade invertida 
    densidadeinvertida_2 = 1 / desidadePopulacional_2;
    densidadeinvertida = 1 / desidadePopulacional;
     
	  
	//declarando o valor das variaveis atributo1carta1, atributo2carta1, etc... para poder fazer a soma final dos valores;  
	    
	double atributo1Carta1, atributo2Carta1, atributo1Carta2, atributo2Carta2;
	
	

    //Menu para escolha do primeiro atributo a ser comparado 
             
    printf("\n Agora iremos fazer a comparação entre as cartas.\n");
    printf("Escolha qual atributo deseja comparar:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Densidade Populacional\n");
    printf("4. Renda per Capita\n");
    printf("5. Pontos turisticos\n");
    scanf("%d", &atributo1);
 

    //Comparação do atributo escolhido 
     switch (atributo1)
    {
        case 1:
       		atributo1Carta1 = (long unsigned int) populacao;
        	atributo1Carta2 = (long unsigned int) populacao_2;
        	
            printf("\n Você escolheu fazer a comparação entre Populações: \n");
            
            resultado1 = populacao > populacao_2 ? 1 : 0;
            
            break;
        case 2:
	        	atributo1Carta1 = (float) pib;
        		atributo1Carta2 = (float) pib_2;
        	
        	printf("\n Você escolheu fazer a comparação entre PIB's: \n");
        	
        	resultado1 = pib > pib_2 ? 1 : 0;
        	
            break;
        case 3:
        		atributo1Carta1 = (float) densidadeinvertida;
        		atributo1Carta2 = (float) densidadeinvertida_2;
        	
        	printf("\n Você escolheu fazer a comparação entre Densidade Populacional: \n");
        	
        	resultado1 = densidadeinvertida > densidadeinvertida_2 ? 0 : 1;
        	
            break;
        case 4:
        	    atributo1Carta1 = (float) pibPercapita;
        		atributo1Carta2 = (float) pibPercapita_2;
        	
        	printf("\n Você escolheu fazer a comparação entre renda Per Capita: \n");
        	
        	resultado1 = pibPercapita > pibPercapita_2 ? 1 : 0;
        	
            break;
        case 5:
				atributo2Carta1 = (float) pontos_turisticos;
        		atributo2Carta2 = (float) pontosTuristicos_2;
        		
        	printf("\n Você escolheu fazer a comparação com Super Poder: \n");
        	
        	resultado1 = pontos_turisticos > pontosTuristicos_2 ? 1 : 0;
        	
            break;

        default:
            printf("\n Opção inválida. Inicie o jogo novamente!\n");
            break;        
    }
    
    
    


    //Menu para escolha do segundo atributo a ser comparado 
	

    printf("\n Escolha qual o Segundo atributo deseja comparar:\n");

    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Densidade Populacional\n");
    printf("4. Renda per Capita\n");
    printf("5. Pontos turisticos\n");

    printf("\n Lembre-se de escolher um atributo diferente do primeiro \n");
    scanf("%d", &atributo2);
	

	//Comparação do atributo 2 
    
    if (atributo1 == atributo2)
    {
        printf("\n Você escolheu o mesmo atributo, comece o jogo novamente! \n");
    }else {
        switch (atributo2){

        case 1:
        	atributo2Carta1 = (long unsigned int) populacao;
        	atributo2Carta2 = (long unsigned int) populacao_2;
        	
            printf("\n Você escolheu fazer a comparação entre Populações: \n");
            
            resultado1 = populacao > populacao_2 ? 1 : 0;
            
            break;
        case 2:
        	atributo2Carta1 = (float) pib;
        	atributo2Carta2 = (float) pib_2;
        	
            printf("\n Você escolheu fazer a comparação entre PIB's: \n");
            
            resultado2 = pib > pib_2 ? 1 : 0;
            
            break;
        case 3:
        		atributo2Carta1 = (float) densidadeinvertida;
        		atributo2Carta2 = (float) densidadeinvertida_2;
        	
            printf("\n Você escolheu fazer a comparação entre Densidade Populacional: \n");
            
            resultado2 = densidadeinvertida < densidadeinvertida_2 ? 1 : 0;
            
            break;
        case 4:
        		atributo2Carta1 = (float) pibPercapita;
        		atributo2Carta2 = (float) pibPercapita_2;
        	
            printf("\n Você escolheu fazer a comparação entre renda Per Capita: \n");
            
            resultado2 = pibPercapita > pibPercapita_2 ? 1 : 0;
            
            break;
        case 5:
        	   	atributo2Carta1 = (float) pontos_turisticos;
        		atributo2Carta2 = (float) pontosTuristicos_2;
        	
            printf("\n Você escolheu fazer a comparação o Super Poder: \n");
            
            resultado2 = pontos_turisticos > pontosTuristicos_2 ? 1 : 0;
            
            break;

        default:
            printf("\n Opção inválida. Inicie o jogo novamente!\n");
            break;
        }
	}


	//Exibindo resultado final
	
	printf("\n ############# Resultado Final!#############  \n");

	
	printf(" Carta 1 - %s - %s\n", CodigoDaCarta, cidade);
	printf(" Carta 2 - %s - %s\n", codigoDacarta_2, cidade_2);


	printf("\n Comparações escolhidas: \n");


	if(atributo1 == 1){
		
		printf("\n Moradores: \n");
		printf("Carta 1: %lu Moradores\n", populacao);
		printf("Carta 2: %lu Moradores\n", populacao_2);
		
	} else if(atributo1 == 2){
		
		printf("\n PIB:  \n");
		printf("Carta 1:  %.3f PIB \n", pib);
		printf("Carta 2:  %.3f PIB \n", pib_2);
		
	}else if (atributo1 == 3){
		
		printf("\n Densidade Populacional: \n");
		printf(" Carta 1: %f de Densidade Polulacional \n", densidadeinvertida);
		printf(" Carta 2: %f de Densidade Polulacional \n", densidadeinvertida_2);
		
	}else if (atributo1 == 4){
		
		printf("\n Renda per Capita: \n");
		printf("Carta 1: %f de Renda per Capita\n", pibPercapita);
		printf("Carta 2: %f de Renda per Capita\n", pibPercapita_2);
		
	}else{
		
		printf("\n Pontos Turisticos: \n");
		printf(" Carta 1: %d Pontos Turisticos\n", pontos_turisticos);
		printf(" Carta 2: %d Pontos turisticos \n", pontosTuristicos_2);
	}


		if(atributo2 == 1){
		
		printf("Moradores: \n");
		printf("Carta 1: %lu Moradores\n", populacao);
		printf("Carta 2: %lu Moradores\n", populacao_2);
		
	} else if(atributo2 == 2){
		
		printf("PIB:  \n");
		printf("Carta 1:  %f PIB \n", pib);
		printf("Carta 2:  %f PIB \n", pib_2);
		
	}else if (atributo2 == 3){
		
		printf("Densidade Populacional: \n");
		printf(" Carta 1: %f de Densidade Polulacional \n", densidadeinvertida);
		printf(" Carta 2: %f de Densidade Polulacional \n", densidadeinvertida_2);
		
	}else if (atributo2 == 4){
		
		printf("Renda per Capita: \n");
		printf("Carta 1: %.3f de Renda per Capita\n", pibPercapita);
		printf("Carta 2: %.3f de Renda per Capita\n", pibPercapita_2);
		
	}else{
		
		printf(" Pontos Turisticos: \n");
		printf(" Carta 1: %d Pontos Turisticos\n", pontos_turisticos);
		printf(" Carta 2: %d Pontos turisticos \n", pontosTuristicos_2);
	}

	//Soma final do resultado
	
	somafinal1 = atributo1Carta1 + atributo2Carta1;
	somafinal2 = atributo1Carta2 + atributo2Carta2;
	
	
	//exibindo o resultado da soma dos valores
	printf("\n Resultado da Soma dos valores:\n");
	printf(" Carta 1: %.3f\n", somafinal1);
	printf(" Carta 2: %.3f\n", somafinal2);



    if (resultado1 && resultado2)
    { 
        printf("\n Carta 01 venceu  \n");
        
    } else if (resultado1 != resultado2)
    {
        printf("\n Empatou!  \n");
        
    } else {
        printf("\n Carta 2 venceu!  \n");
    }
    
    

     
     
     
        return 0;
     
     
     
     
 }