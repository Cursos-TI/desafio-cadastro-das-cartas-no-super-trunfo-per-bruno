#include <stdio.h>

int main(){  
    //Carta 1
    char estado;
    char codigo[3];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pTuristico;

    //Carta 2
    char estado2;
    char codigo2[3];
    char cidade2[50];
    unsigned long int populacao2;
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
    float densidadeInversa = (float)area/populacao;
    float pibCapita = (float)pib/populacao;
    float poder = (float)populacao + area + pib + (float)pTuristico + pibCapita + densidadeInversa;

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
    float densidadeInversa2 = (float)area2/populacao2;
    float pibCapita2 = (float)pib2/populacao2;
    float poder2 = (float)populacao2 + area2 + pib2 + (float)pTuristico2 + pibCapita2 + densidadeInversa2;

    //Carta 1
    printf("\nDados da carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área em Km²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos:%i\n", pTuristico);
    printf("Densidade populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pibCapita);
    printf("Super Poder: %.2f\n", poder);

    //Carta 2
    printf("\nDados da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos:%i\n", pTuristico2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibCapita2);
    printf("Super Poder: %.2f\n\n", poder2);

int atributo, atributo2;
float valor1Carta1, valor1Carta2, valor2Carta1, valor2Carta2;

    printf("1 -> População\n");
    printf("2 -> Área\n");
    printf("3 -> PIB\n");
    printf("4 -> Pontos Turísticos\n");
    printf("5 -> Densidade Populacional\n");
    printf("6 -> PIB per Capita\n");
    printf("7 -> Super Poder\n");
   
    printf("\nEscolha o primeiro atributo para comparar: ");
    scanf("%d", &atributo);

    printf("Escolha o segundo atributo para comparar: ");
    scanf("%d", &atributo2);

    if (atributo == atributo2) {
        printf("\nErro: Escolha atributos diferentes.\n");
    }
 
    switch (atributo){
        case 1: valor1Carta1 = populacao; valor1Carta2 = populacao2; 
        break;
        case 2: valor1Carta1 = area; valor1Carta2 = area2; 
        break;
        case 3: valor1Carta1 = pib; valor1Carta2 = pib2; 
        break;
        case 4: valor1Carta1 = pTuristico; valor1Carta2 = pTuristico2; 
        break;
        case 5: valor1Carta1 = densidade; valor1Carta2 = densidade2;
        break;
        case 6: valor1Carta1 = pibCapita; valor1Carta2 = pibCapita2; 
        break;
        case 7: valor1Carta1 = poder; valor1Carta2 = poder2; 
        break;
        default: printf("Atributo inválido.\n");
    }

    float soma1 = valor1Carta1 + valor2Carta1;
    float soma2 = valor1Carta2 + valor2Carta2;

    (soma1 > soma2) ? printf("\nCarta 1 venceu!\n") : (soma1 < soma2) ? printf("\nCarta 2 venceu!\n") : printf("\nEmpate!\n");

    return 0;
}
