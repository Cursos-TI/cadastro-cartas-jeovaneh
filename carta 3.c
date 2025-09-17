#include <stdio.h>

int main() {
    int pontos, populacao; 
    float PIB, Km2, capita, densidade;
    char estado[50], codigo[50], cidade[50];
    
    printf("***Exibição da primeira carta.***\n\n");

    // Exibindo os dados fornecidos
    printf("Estado: A.\n");
    printf("Digite o nome da cidade: São Paulo.\n");
    printf("Digite o código da carta: A01.\n");
    printf("Digite o PIB: 699.28 Bilhões de Reais.\n");
    printf("Digite a área em KM²: 1521.11 Km².\n");
    printf("Digite o PIB per Capita: 56724.32 Reais.\n");
    printf("Digite a densidade populacional: 8102.47 hab/Km².\n");
    printf("Quantidade de pontos turísticos: 50.\n");
    printf("Quantidade da população: 12325000.\n\n");

    printf("*** Calculando a Densidade populacional e o PIB per capita ***\n\n");

    printf("Digite o número populacional: ");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: ");
    scanf("%f", &Km2);

    densidade = (float)populacao / Km2;
    printf("A densidade populacional é: %.2f hab/Km²\n", densidade);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número populacional: ");
    scanf("%d", &populacao);

    capita = (float)PIB / populacao;
    printf("O PIB per capita é: %.2f reais\n", capita);

    return 0;
}
