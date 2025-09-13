#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int ponto_turistico1, ponto_turistico2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpcapita1, pibpcapita2, superpoder1, superpoder2;
 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Programa Super Trunfo em C, a seguir você deverá informar os dados das cartas: \n\n");
    printf("Informe o Estado da Carta 1: ");
    scanf("%c", &estado1);
    printf("\nInforme o Código da Carta 1: ");
    scanf("%s", codigo1);
    while (getchar() != '\n');
    printf("\nInforme o Nome da Cidade 1: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("\nInforme a População da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("\nInforme a Área da Carta 1: ");
    scanf("%f", &area1);
    printf("\nInforme o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("\nInforme o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &ponto_turistico1);
    while (getchar() != '\n');
    printf("\nInforme o Estado da Carta 2: ");
    scanf("%c", &estado2);
    printf("\nInforme o Código da Carta 2: ");
    scanf("%s", codigo2);
    while (getchar() != '\n');
    printf("\nInforme o Nome da Cidade 2: ");
    fgets(cidade2, sizeof(cidade1), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("\nInforme a População da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("\nInforme a Área da Carta 2: ");
    scanf("%f", &area2);
    printf("\nInforme o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("\nInforme o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &ponto_turistico2);

    //Cálculo Densidade Populacional
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //Cálculo PIB Per Capita
    pibpcapita1 =  (float) pib1 / populacao1;
    pibpcapita2 =  (float) pib2 / populacao2;

    //Cálculo Super Poder
    superpoder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + pibpcapita1 + (1 / densidade1);
    superpoder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + pibpcapita2 + (1 / densidade2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", pibpcapita1);
    printf("Densidade Inversa: %.10f\n", 1/densidade1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", pibpcapita2);
    printf("Densidade Inversa: %.10f\n", 1/densidade2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Comparativo e Exibição das Cartas

    printf("\nComparação de Cartas: \n");

    if (populacao1 > populacao2) {
            printf("POPULAÇÃO: Carta 1 (%lu) venceu!\n", populacao1);
        } else {
            printf("POPULAÇÃO: Carta 2 (%lu) venceu!\n", populacao2);
        }
    if (area1 > area2) {
            printf("ÁREA: Carta 1 (%.2fkm²) venceu!\n", area1);
        } else {
            printf("ÁREA: Carta 2 (%.2fkm²) venceu!\n", area2);
        }
    if (pib1 > pib2) {
            printf("PIB: Carta 1 (%.2f Reais) venceu!\n", pib1);
        } else {
            printf("PIB: Carta 2 (%.2f Reais) venceu!\n", pib2);
        }
    if (ponto_turistico1 > ponto_turistico2) {
            printf("PONTOS TURÍSTICOS: Carta 1 (%d) venceu!\n", ponto_turistico1);
        } else {
            printf("PONTOS TURÍSTICOS: Carta 2 (%d) venceu!\n", ponto_turistico2);
        }
    if (1/densidade1 > 1/densidade2) {
            printf("Densidade Populacional (Inverso): Carta 2 (%.10f) venceu!\n", 1/densidade2);
        } else {
            printf("Densidade Populacional (Inverso): Carta 1 (%.10f) venceu!\n", 1/densidade1);
        }
    if (pibpcapita1 > pibpcapita2) {
            printf("PIB per Capita: Carta 1 (%.2f Reais) venceu!\n", pibpcapita1);
        } else {
            printf("PIB per Capita: Carta 2 (%.2f Reais) venceu!\n", pibpcapita2);
        }
    if (superpoder1 > superpoder2) {
            printf("Super Poder: Carta 1 (%.2f) venceu!\n", superpoder1);
        } else {
            printf("Super Poder: Carta 2 (%.2f) venceu!\n", superpoder2);
        }

    return 0;
}
