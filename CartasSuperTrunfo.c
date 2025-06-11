#include <stdio.h>

int main(){

    //Variaveis carta 1
    char estado1[4];
    char codigo1[10];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int pontos1;
    double densidade1;
    double pibPerCapita1;
    float superpoder1;

    //Variaveis carta 2
    char estado2[4];
    char codigo2[10];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos2;
    double densidade2;
    double pibPerCapita2;
    float superpoder2;


//entrada de dados da carta 1

    printf("Criando cartas de Super Trunfo\n");
    printf("================================\n\n");

    printf("***Digite os dados da carta 1***\n");

    printf("\nDigite o estado da carta 1(ex:A,B,C...): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1(ex:A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da carta 1 em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos1);



//entrada de dados da carta 2
    printf("\n ***Digite os dados da carta 2***\n");

    printf("\nDigite o estado da carta 2(ex:A,B,C...): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2(ex:A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da carta 2 em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos2);

    //Cálculo para a carta 1
    densidade1 = (double)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (double)populacao1; 
    superpoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 + pontos1 + (1 / densidade1);

    //Cálculo para a carta 2
    densidade2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (double)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 + pontos2 + (1 / densidade2);


//Exibição carta 1

    printf("\n***Exibindo as cartas:***\n");
    
    printf("\n ***Carta 1*** \n");

    printf("\nCarta 1:\n");

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nome1);

    printf("População: %lu\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: R$%.2f bilhões de reais\n", pib1);

    printf("Número de Pontos turísticos: %d\n", pontos1);

    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);

    printf("PIB per Capita: R$%.2f\n", pibPerCapita1);

    printf("Superpoder: %.2f\n", superpoder1);

//Exibição carta 2

    printf("\n ***Carta 2*** \n");

    printf("\nCarta 2:\n");

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("População: %lu\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: R$%.2f bilhões de reais \n", pib2);

    printf("Número de Pontos turísticos: %d\n", pontos2);

    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);

    printf("PIB per Capita: R$%.2f\n", pibPerCapita2);

    printf("Superpoder: %.2f\n", superpoder2);

    //Comparação das cartas
    printf("\n***Comparando as cartas:***\n");

    printf("\n População: %d\n", populacao1 > populacao2);
    printf("\n Área: %d\n", area1 > area2);
    printf("\n PIB: %d\n", pib1 > pib2);
    printf("\n Número de Pontos turísticos : %d\n", pontos1 > pontos2);
    printf("\n Densidade Demográfica : %d\n", densidade1 < densidade2);
    printf("\n PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("\n Superpoder: %d\n", superpoder1 > superpoder2);

















































    return 0;
}
