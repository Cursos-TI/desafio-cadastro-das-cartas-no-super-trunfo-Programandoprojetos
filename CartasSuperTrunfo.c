#include <stdio.h>

int main() {
    // Dados fixos da primeira carta (A01)
    char codigo1[] = "A01";
    int populacao1 = 150000;
    float area1 = 345.67;
    float pib1 = 12.50;
    int pontosTuristicos1 = 5;

    // Dados fixos da segunda carta (B02)
    char codigo2[] = "B02";
    int populacao2 = 275000;
    float area2 = 678.90;
    float pib2 = 18.75;
    int pontosTuristicos2 = 8;

    // Exibição dos dados
    printf("\n=== Dados das Cartas Cadastradas ===\n");

    printf("\nCarta 1 - %s\n", codigo1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - %s\n", codigo2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
