#include <stdio.h>

int main() {
    #include <stdio.h>

int main() {
    char Estado[5], Estado2[5];
    char codigo[5], codigo2[5];
    char nomeCidade[100], nomeCidade2[100];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;

    printf("Carta 1:\n");

    printf("Digite o estado:\n");
    scanf("%4s", Estado);  

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o código:\n");
    scanf("%4s", codigo);  

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]%*c", nomeCidade);  

    printf("Digite quantos habitantes tem:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turismo);

    printf("Carta 2:\n");

    printf("Digite o estado:\n");
    scanf("%4s", Estado2);  

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o código:\n");
    scanf("%4s", codigo2);  

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]%*c", nomeCidade2); 

    printf("Digite quantos habitantes tem:\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turismo2);

    

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", turismo);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turismo2);

    return 0;
}

