#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a segunda carta
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Goias:\n");
    scanf("%c", &estado1);
    printf("Go01:\n");
    scanf("%4s", &codigoCarta1);
    printf("Goiania:\n");
    scanf("%s[^\n]", &nomeCidade1);  // Lê a linha inteira, incluindo espaços
    printf("1.437.366:\n");
    scanf("%d", &populacao1);
    printf("728,8 km²:\n");
    scanf("%f", &area1);
    printf("59 bilhoes de reais:\n");
    scanf("%f", &pib1);
    printf("8:\n");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Goias:/n");
    scanf(" %c", &estado2);
    printf("Go02:\n");
    scanf("%4s", &codigoCarta2);
    printf("Itumbia:\n");
    scanf(" %[^\n]", &nomeCidade2);  // Lê a linha inteira, incluindo espaços
    printf("107,970:\n");
    scanf("%d", &populacao2);
    printf("2.447 km²:\n");
    scanf("%f", &area2);
    printf("6 bilhoes:\n");
    scanf("%f", &pib2);
    printf("8:\n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
