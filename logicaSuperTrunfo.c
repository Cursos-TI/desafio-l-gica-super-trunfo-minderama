#include <stdio.h>

int main(){
    //Variáveis da carta 1
    char estado1, codigo1[4], nomecidade1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

    //Variáveis da carta 2
    char estado2, codigo2[4], nomecidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

    // Cadastro da carta 1
    printf("Digite as informações da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
   
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf("%49s", nomecidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);

    // Cadastro da carta 2
    printf("Digite as informações da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
   
    printf("Código da carta (ex: A01): ");
    scanf(" %s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %49s", nomecidade2);

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidade1);
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidade2);

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);

    // Comparação
    printf("--- Comparação de cartas ---\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: %d\n", densidade1 > densidade2);
    printf("Pib per capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    // Atributo do ganhador - PIB percapita
    printf("\n--- Comparação pelo PIB per capita ---\n");
    printf("%s: %.2f reais\n", nomecidade1, pibpercapita1);
    printf("%s: %.2f reais\n", nomecidade2, pibpercapita2);

    if (pibpercapita1 > pibpercapita2){
        printf("A carta vencedora é: %s (Maior PIB per capita)\n", nomecidade1);
    }else if (pibpercapita2 > pibpercapita1){
        printf("A carta vencedora é: %s (Maior PIB per capita)\n", nomecidade2);
    }
    // Menu interativo
    int opcao;

    printf("\n--- Escolha um atributo para comparar ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da comparação ---\n");

    switch(opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", nomecidade1, populacao1);
            printf("%s: %lu habitantes\n", nomecidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("A carta vencedora é: %s\n", nomecidade1);
            } else if (populacao2 > populacao1) {
                printf("A carta vencedora é: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km²\n", nomecidade1, area1);
            printf("%s: %.2f km²\n", nomecidade2, area2);
            if (area1 > area2) {
                printf("A carta vencedora é: %s\n", nomecidade1);
            } else if (area2 > area1) {
                printf("A carta vencedora é: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões de reais\n", nomecidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", nomecidade2, pib2);
            if (pib1 > pib2) {
                printf("A carta vencedora é: %s\n", nomecidade1);
            } else if (pib2 > pib1) {
                printf("A carta vencedora é: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparando Número de Pontos Turísticos:\n");
            printf("%s: %d pontos turísticos\n", nomecidade1, pontosturisticos1);
            printf("%s: %d pontos turísticos\n", nomecidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("A carta vencedora é: %s\n", nomecidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("A carta vencedora é: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparando Densidade Populacional:\n");
            printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("A carta vencedora é: %s\n", nomecidade1);
            } else if (densidade2 < densidade1) {
                printf("A carta vencedora é: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("Comparando PIB per capita:\n");
            printf("%s: %.2f reais\n", nomecidade1, pibpercapita1);
            printf("%s: %.2f reais\n", nomecidade2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) {
                printf("A carta vencedora é: %s\n", nomecidade1);
            } else if (pibpercapita2 > pibpercapita1) {
                printf("A carta vencedora é: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
