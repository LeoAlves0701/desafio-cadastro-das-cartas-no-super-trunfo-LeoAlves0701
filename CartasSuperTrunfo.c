#include <stdio.h>

int main(){

    //Variaveis carta 1
    char estado1[4];
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Variaveis carta 2
    char estado2[4];
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

//entrada de dados da carta 1
    printf("Digite o estado da carta 1(ex:A,B,C...): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1(ex:A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1 em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontos1);

//entrada de dados da carta 2
    printf("\nDigite o estado da carta 2(ex:A,B,C...): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2(ex:A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2 em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontos2);

//Exibição carta 1
    printf("\nCarta 1:\n");

    printf("Código: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nome1);

    printf("População: %d\n", populacao1);

    printf("Área: %.2f km²\n", area1);

    printf("PIB: R$%.2f bilhões de reais\n", pib1);

    printf("Número de Pontos turísticos: %d\n", pontos1);

//Exibição carta 2
    printf("\nCarta 2:\n");

    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nome2);

    printf("População: %d\n", populacao2);

    printf("Área: %.2f km²\n", area2);

    printf("PIB: R$%.2f bilhões de reais \n", pib2);

    printf("Número de Pontos turísticos: %d\n", pontos2);



    return 0;

}
//FIM do código