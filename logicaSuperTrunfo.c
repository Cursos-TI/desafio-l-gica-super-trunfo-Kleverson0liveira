#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    //VARIAVEIS
    int num_estado, num_estado_2,  pontos_turisticos, pontos_turisticos_2, escolha, escolha_2;
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

    // INICIANDO LOGICA DE COMPARAÇÃO
    printf("Agora vamos escolher dois elemento para comparar entre as cidades e verificar a vencedora entre elas. \n");
    printf("Escolhas estre as opções disponiveis as que voçê deseja usar para comparação \n");
    printf("1-População \n");
    printf("2-Área \n");
    printf("3-PIB \n");
    printf("4-Nº Pontos Turisticos \n");
    printf("5-Densidade Populacional \n");
    printf("6-PIB per Capita \n");
    printf("INFORME O NUMERO DO PRIMEIRO ITEM QUE DESEJA USAR PARA COMPARAÇÃO. \n");
    scanf("%d \n", &escolha);
    printf("INFORME O NUMERO DO SEGUNDO ITEM QUE DESEJA USAR PARA COMPARAÇÃO. \n");
    scanf("%d", &escolha_2);

    //ANALIZANDO A ESCOLHA
    if(escolha == escolha_2 || (1 > escolha && escolha > 6) || (1 > escolha_2 && escolha_2 > 6)){
        printf("OPÇÃO INVALIDA INFORMADA");
    }else{

        switch (escolha)
    {
    case 1:
        printf("Voçê escolheu: População \n");
        printf("%s: %lu habitantes X %s: %lu habitantes \n", cidade, populacao, cidade_2, populacao_2);
        if(populacao > populacao_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(populacao == populacao_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);

        }
        break;

    case 2:
    printf("Voçê escolheu: Área \n");
    printf("%s: %.2f Km² X %s: %.2f Km²", cidade, area, cidade_2, area_2);
        if(area > area_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(area == area_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 3:
    printf("Voçê escolheu: PIB \n");
    printf("%s: PIB %.2f bilhões de reais X %s:PIB %.2f bilhões de reais \n ", cidade, pib, cidade_2, pib_2);
        if(pib > pib_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(pib == pib_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 4:
    printf("Voçê escolheu: Nº de Pontos Turisticos \n");
    printf("%s:  %d Pontos Turisticos X %s: %d Pontos Turisticos \n ", cidade, pontos_turisticos, cidade_2, pontos_turisticos_2);
        if(pontos_turisticos > pontos_turisticos_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(pontos_turisticos == pontos_turisticos_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 5:
    printf("Voçê escolheu: Densidade Populacional \n");
    printf("%s: %.2f Densidade Populacional X %s: %.2f Densidade Populacional \n ", cidade, densidade_populacional, cidade_2, densidade_populacional_2);
        if(densidade_populacional < densidade_populacional_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(densidade_populacional == densidade_populacional_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 6:
    printf("Voçê escolheu: PIB per Capita \n");
    printf("%s: PIB per Capita de %.2f X %s: PIB per Capita de %.2f \n ", cidade, pib_per_capita, cidade_2, pib_per_capita_2);
        if(pib_per_capita > pib_per_capita_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(pib_per_capita == pib_per_capita_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;       
    }


    switch (escolha_2)
    {
    case 1:
        printf("Voçê escolheu: População \n");
        printf("%s: %lu habitantes X %s: %lu habitantes \n", cidade, populacao, cidade_2, populacao_2);
        if(populacao > populacao_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(populacao == populacao_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);

        }
        break;

    case 2:
    printf("Voçê escolheu: Área \n");
    printf("%s: %.2f Km² X %s: %.2f Km²", cidade, area, cidade_2, area_2);
        if(area > area_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(area == area_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 3:
    printf("Voçê escolheu: PIB \n");
    printf("%s: PIB %.2f bilhões de reais X %s:PIB %.2f bilhões de reais \n ", cidade, pib, cidade_2, pib_2);
        if(pib > pib_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(pib == pib_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 4:
    printf("Voçê escolheu: Nº de Pontos Turisticos \n");
    printf("%s:  %d Pontos Turisticos X %s: %d Pontos Turisticos \n ", cidade, pontos_turisticos, cidade_2, pontos_turisticos_2);
        if(pontos_turisticos > pontos_turisticos_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(pontos_turisticos == pontos_turisticos_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 5:
    printf("Voçê escolheu: Densidade Populacional \n");
    printf("%s: %.2f Densidade Populacional X %s: %.2f Densidade Populacional \n ", cidade, densidade_populacional, cidade_2, densidade_populacional_2);
        if(densidade_populacional < densidade_populacional_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(densidade_populacional == densidade_populacional_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

        case 6:
    printf("Voçê escolheu: PIB per Capita \n");
    printf("%s: PIB per Capita de %.2f X %s: PIB per Capita de %.2f \n ", cidade, pib_per_capita, cidade_2, pib_per_capita_2);
        if(pib_per_capita > pib_per_capita_2){
            printf("Cidade %s venceu contra cidade %s \n", cidade, cidade_2);
        }else if(pib_per_capita == pib_per_capita_2){
            printf("Empate!! \n");
        }else{
            printf("Cidade %s venceu contra cidade %s \n", cidade_2, cidade);
        }
        break;

    default:
    printf("VALOR INVALIDO, ENCERENDO EXECUÇÃO \n");
        break;
    }


    }
    return 0;


};