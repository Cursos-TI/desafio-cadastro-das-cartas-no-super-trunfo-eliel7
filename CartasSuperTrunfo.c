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
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2;
 
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
    scanf("%d", &populacao1);
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
    scanf("%d", &populacao2);
    printf("\nInforme a Área da Carta 2: ");
    scanf("%f", &area2);
    printf("\nInforme o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("\nInforme o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &ponto_turistico2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);

    return 0;
}
