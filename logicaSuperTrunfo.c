#include <stdio.h>
#include <string.h>

int main(){

    //VARIAVEIS
    int num_estado, num_estado_2,  pontos_turisticos, pontos_turisticos_2;
    float area, area_2, pib, pib_2,densidade_populacional,densidade_populacional_2, pib_per_capita,pib_per_capita_2, super_poder, super_poder_2;
    char inic_estado, inic_estado_2;
    char cidade[50], cidade_2[50];
    unsigned long int populacao, populacao_2;



    //INICIO DA COLETA DE INFORMAÇOES PARA O PRIMEIRO CARD
    printf("Seja bem vindo!!! \n");
    printf("Vamos começar o super trunfo?? \n \n");
    printf("Escolha  uma letra para começar, a letra escolhida deve estar entre A e H: ");
    scanf(" %c", &inic_estado);
    printf("Escolha um numero, o numero deve estar entre 0 e 99 ele sera usado para criar o codigo de sua carta juntamente a letra que representa o estado: ");
    scanf("%d", &num_estado);
    printf("Escolha uma cidade e digite seu nome: ");
    getchar(); // limpa o \n restante no buffer
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0; // remove o \n
    printf("Qual a população desta cidade? ");
    scanf("%lu", &populacao);
    printf("Qual a área em Km² desta cidade? ");
    scanf("%f", &area);
    printf("Qual o valor do PIB da cidade? ");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos existem nesta cidade? ");
    scanf("%d", &pontos_turisticos);

    // FIM DA COLETA DE INFORMAÇOES DO PRIMEIRO CARDI

    printf("\n\n");
    printf("OK! Muito bem você concluil o primeiro cardi, vamos dar inicio a coleta de recursos do segundo cardi agora \n \n");

    //INICIO DO SEGUNDO CARDI 
    getchar(); // limpa o \n restante no buffer
    printf("Escolha  uma letra para começar, a letra escolhida deve estar entre A e H: ");
    scanf(" %c", &inic_estado_2);
    printf("Escolha um numero, o numero deve estar entre 0 e 99 ele sera usado para criar o codigo de sua carta juntamente a letra que representa o estado: ");
    scanf("%d", &num_estado_2);
    getchar(); // limpa o \n restante no buffer
    printf("Escolha uma cidade e digite seu nome: ");
    fgets(cidade_2, 50, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0; // remove o \n
    printf("Qual a população desta cidade? ");
    scanf("%lu", &populacao_2);
    printf("Qual a área em Km² desta cidade? ");
    scanf("%f", &area_2);
    printf("Qual o valor do PIB da cidade? ");
    scanf("%f", &pib_2);
    printf("Quantos pontos turisticos existem nesta cidade? ");
    scanf("%d", &pontos_turisticos_2);

    // FIM DA COLETA DE INFORMAÇOES DO SEGUNDO CARDI
    printf(" \n \n");
    printf("Muito bem, você concluil com exito a montagem dos dois cardis, veja a seguir o resultado desta tarefa: \n \n");

    // iniciando calculço de densidade populacional e pib per capita
    densidade_populacional = (float) populacao / area;
    densidade_populacional_2 = (float) populacao_2 / area_2;
    pib_per_capita = (float) pib * 1000000000 / populacao;
    pib_per_capita_2 = (float) pib_2 * 1000000000 / populacao_2;


    //INICIO DA EXIBIÇAO DOS RESULTADOS

    //card_1
    printf("Carta 1 \n");
    printf("Estado: %c \n", inic_estado);
    printf("Codigo: %c%02d \n", inic_estado, num_estado);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais \n \n", pib_per_capita);
   
    printf("Carta 2 \n");
    printf("Estado: %c \n", inic_estado_2);
    printf("Codigo: %c%02d \n", inic_estado_2, num_estado_2);
    printf("Nome da Cidade: %s \n", cidade_2);
    printf("População: %lu \n", populacao_2);
    printf("Área: %.2f Km² \n", area_2);
    printf("PIB: %.2f bilhões de reais \n", pib_2);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais \n \n", pib_per_capita_2);

    // INICIANDO LOGICA DE COMPARAÇÃO/EXIBIÇÃO DE RESULTADO
    printf("Comparação de cartas (Atributo: Densidade Populacional): \n \n");
    printf("Carta 1 - %s: %.2f \n", cidade, densidade_populacional);
    printf("Carta 2 - %s: %.2f \n", cidade_2, densidade_populacional_2);
    

    if(densidade_populacional < densidade_populacional_2){
        printf("Resultado: Carta 1 (%s) vencel! \n", cidade);
    }else{
        printf("Resultado: Carta 2 (%s) vencel! \n", cidade_2);
    };


    return 0;


};