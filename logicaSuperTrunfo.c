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

    // Comparação nível mestre //

    int atributo1, atributo2;
    float valorCarta1Atributo1 = 0, valorCarta1Atributo2 = 0, valorCarta2Atributo1 = 0, valorCarta2Atributo2 = 0;
    float soma1 = 0, soma2 = 0;

    //Menu atributo 1//
    printf("Escolha o primeiro atributo da comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite sua escolha\n");
    scanf("%d", &atributo1);

    //Menu atributo 2//
    printf("Escolha o segundo atributo da comparação (diferente da primeira escolha)\n");
    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Número de pontos turisticos\n"); break;
                case 5: printf("5. Densidade populacional\n"); break;
                case 6: printf("6. PIB per capita\n"); break;
            }
        }
    }
   printf("Digite sua escolha ");
   scanf("%d", &atributo2);

   if (atributo2 == atributo1 ) {
    printf("Opção inválida!\n");
    return 0;
   }

   // Comparação dos atributos //
   switch(atributo1) {
    case 1: valorCarta1Atributo1 = populacao1; valorCarta2Atributo1 = populacao2; break;
    case 2: valorCarta1Atributo1 = area1; valorCarta2Atributo1 = area2; break;
    case 3: valorCarta1Atributo1 = pib1; valorCarta2Atributo1 = pib2; break;
    case 4: valorCarta1Atributo1 = pontosturisticos1; valorCarta2Atributo1 = pontosturisticos2; break;
    case 5: valorCarta1Atributo1 = densidade1; valorCarta2Atributo1 = densidade2; break;
    case 6: valorCarta1Atributo1 = pibpercapita1; valorCarta2Atributo1 = pibpercapita2; break;
   }

   switch(atributo2) {
    case 1: valorCarta1Atributo2 = populacao1; valorCarta2Atributo2 = populacao2; break;
    case 2: valorCarta1Atributo2 = area1; valorCarta2Atributo2 = area2; break;
    case 3: valorCarta1Atributo2 = pib1; valorCarta2Atributo2 = pib2; break;
    case 4: valorCarta1Atributo2 = pontosturisticos1; valorCarta2Atributo2 = pontosturisticos2; break;
    case 5: valorCarta1Atributo2 = densidade1; valorCarta2Atributo2 = densidade2; break;
    case 6: valorCarta1Atributo2 = pibpercapita1; valorCarta2Atributo2 = pibpercapita2; break;
   }

   //Apresentação dos valores//
   printf("%s: Atributo 1 = %.2f, Atributo 2 = %.2f\n", nomecidade1, valorCarta1Atributo1, valorCarta1Atributo2);
   printf("%s: Atributo 1 = %.2f, Atributo 2 = %.2f\n", nomecidade2, valorCarta2Atributo1, valorCarta2Atributo2);

   //Soma//
   soma1 = (atributo1 == 5 ? (1 / valorCarta1Atributo1) : valorCarta1Atributo1) +
   (atributo2 == 5 ? (1 / valorCarta1Atributo2) : valorCarta1Atributo2);

   soma2 = (atributo1 == 5 ? (1 / valorCarta2Atributo1) : valorCarta2Atributo1) +
   (atributo2 == 5 ? (1 / valorCarta2Atributo2) : valorCarta2Atributo2);

   printf("Soma dos atributos\n");
   printf("%s: %.2f\n", nomecidade1, soma1);
   printf("%s: %.2f\n", nomecidade2, soma2);

   //Soma final//
   printf("Resultado Final\n");
   if (soma1 > soma2) {
    printf("A carta vencedora é: %s\n", nomecidade1);
    }else if (soma1 < soma2) {
        printf("A carta vencedora é: %s\n", nomecidade2);
    }else{
        printf("Empate\n");
    }

    return 0;
}
