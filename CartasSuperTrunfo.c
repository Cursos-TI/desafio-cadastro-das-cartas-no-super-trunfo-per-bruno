#include <stdio.h>

int main(){  
    //Carta 1
    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pTuristico;

    //Carta 2
    char estado2;
    char codigo2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristico2;
    
    //Carta 1
    printf("Carta 1:\nInforme a letra de um estado de A a H: ");
    scanf(" %c", &estado);

    printf("Informe o codigo da carta: ");
    scanf("%s", &codigo);
    
    printf("Informe a cidade: ");
    scanf("%s", &cidade);
    
    printf("Informe a população: ");
    scanf("%i", &populacao);

    printf("Informe a área em Km²: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%i", &pTuristico);

    float densidade = (float)populacao/area;
    float pibCapita = (float)pib/populacao;

    //Carta2
    printf("\nCarta 2:\nInforme a letra de um estado de A a H: ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta: ");
    scanf("%s", &codigo2);
    
    printf("Informe a cidade: ");
    scanf("%s", &cidade2);
    
    printf("Informe a população: ");
    scanf("%i", &populacao2);

    printf("Informe a área em Km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%i", &pTuristico2);

    float densidade2 = (float)populacao2/area2;
    float pibCapita2 = (float)pib2/populacao2;

    //Carta 1
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área em Km²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos:%i\n", pTuristico);
    printf("Densidade populacional: %f\n", densidade);
    printf("PIB per Capita: %f\n", pibCapita);

    //Carta 2
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área em Km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos:%i\n", pTuristico2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pibCapita2);

    return 0;
}
