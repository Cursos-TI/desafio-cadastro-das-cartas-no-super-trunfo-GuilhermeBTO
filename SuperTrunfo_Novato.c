#include <stdio.h>
int main() {
    // Dados para a Carta 1 
    char estado1[30];
    char codigo_carta1[10];
    char nome_cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //Entrada de Dados da Carta 01:
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%29s", estado1);
    printf("Codigo da Carta: ");
    scanf("%9s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf("%29s", nome_cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Dados para a Carta 2 
    char estado2[30];
    char codigo_carta2[10];
    char nome_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada de Dados da Carta 02:
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%29s", estado2);
    printf("Codigo da Carta: ");
    scanf("%9s", codigo_carta2);
    printf("Nome da Cidade: ");
    scanf("%29s", nome_cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibir Carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Pontos Turisticos: %d \n", pontos_turisticos1);

    printf("\n"); // Linha em branco para separar as cartas

    // Exibir Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Pontos Turisticos: %d \n", pontos_turisticos2);

    return 0;
}
