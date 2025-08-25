
/*
        desafio nivel mestre
*/
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

const char* comparacao(float valor1,float valor2){

if (valor1 > valor2){
    return("carta 1 venceu");
}else if(valor2 > valor1){
    return("carta 2 venceu");
}else{
    return("empate");
}
}

const char* comparacaoInvertida(float valor1, float valor2){
    if (valor1 < valor2){
        return("carta 1 venceu");
    }else if(valor2 < valor1){
        return("carta 2 venceu");
    }else{
        return("empate");
    }
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    //variaveis da primeira carta
    char estado1, codigo1[5], cidade1[20];
    int pontosTuristicos1;
    unsigned long int populacao1;
    float area1, PIB1, densidade1, PIBPerCapita1, poder1;

    //variaveis da segunda carta
    char estado2, codigo2[5], cidade2[20];
    int pontosTuristicos2;
    unsigned long int populacao2;
    float area2, PIB2, densidade2, PIBPerCapita2, poder2;
    


    printf("----------------------\n");
    printf("-----Super Trunfo-----\n");
    printf("----------------------\n");
    printf("crie as cartas\n");

    //criando primera carta
    printf("carta 1 \n");
    printf("estado: ");
    scanf(" %c",&estado1);
    printf("codigo da carta: ");
    scanf("%s",codigo1);
    printf("cidade: ");
    scanf("%s",cidade1);
    printf("populacao: ");
    scanf("%lu",&populacao1);
    printf("área (em km2): ");
    scanf("%f",&area1);
    printf("PIB: ");
    scanf("%f",&PIB1);
    printf("numero de pontos turisticos: ");
    scanf("%d",&pontosTuristicos1);

    densidade1 = populacao1 / area1;
    PIBPerCapita1 = PIB1 / populacao1;

    poder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBPerCapita1 + (1.0 / densidade1);

    printf("\n\n");
    
    //mostra a carta criada
    printf("-------carta 1------- \n");
    printf("estado: %c \n",estado1);
    printf("codigo da carta: %s \n",codigo1);
    printf("nome da cidade: %s \n",cidade1);
    printf("populacao: %lu \n",populacao1);
    printf("área: %.2f km² \n",area1);
    printf("PIB: %.2f reais \n",PIB1);
    printf("numero de pontos turisticos: %d \n",pontosTuristicos1);
    printf("densidade populacional: %.2f hab/km²\n ",densidade1);
    printf("PIB per capita: %.2f reais \n", PIBPerCapita1);
    printf("o poder desta carta é: %.2f",poder1);

    printf("\n\n");

    //criando a segunda carta
    printf("carta 2 \n");
    printf("estado: ");
    scanf(" %c",&estado2);
    printf("codigo da carta: ");
    scanf("%s",codigo2);
    printf("cidade: ");
    scanf("%s",cidade2);
    printf("populacao: ");
    scanf("%lu",&populacao2);
    printf("área (em km²): ");
    scanf("%f",&area2);
    printf("PIB: ");
    scanf("%f",&PIB2);
    printf("numero de pontos turisticos: ");
    scanf("%d",&pontosTuristicos2);

    densidade2 = populacao2 / area2;
    PIBPerCapita2 = PIB2 / populacao2;

    poder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBPerCapita2 + (1.0 / densidade2);

    printf("\n\n");

    //mostra a carta criada
    printf("-------carta 2------- \n");
    printf("estado: %c \n",estado2);
    printf("codigo da carta: %s \n",codigo2);
    printf("nome da cidade: %s \n",cidade2);
    printf("populacao: %lu \n",populacao2);
    printf("área: %.2f km² \n",area2);
    printf("PIB: %.2f reais \n",PIB2);
    printf("numero de pontos turisticos: %d \n",pontosTuristicos2);
    printf("densidade populacional: %.2f hab/km² \n",densidade2);
    printf("PIB per capita: %.2f reais \n", PIBPerCapita2);
    printf("o poder desta carta é: %.2f",poder2);

    printf("\n\n");

    //comparar cartas
    printf("---comparando cartas--- \n");
    printf("populaçao: %s (%d)\n", comparacao(populacao1,populacao2), populacao1 > populacao2 );
    printf("area: %s (%d)\n", comparacao(area1,area2), area1 > area2 );
    printf("PIB: %s (%d)\n", comparacao(PIB1,PIB2), PIB1 > PIB2 );
    printf("pontos turisticos: %s (%d)\n", comparacao(pontosTuristicos1,pontosTuristicos2), pontosTuristicos1 > pontosTuristicos2);
    printf("densidade populacional: %s (%d)\n", comparacaoInvertida(densidade1,densidade2), densidade1 < densidade2);
    printf("PIB per Capita: %s (%d)\n", comparacao(PIBPerCapita1,PIBPerCapita2),PIBPerCapita1 > PIBPerCapita2 );
    printf("super poder: %s (%d)\n", comparacao(poder1,poder2),poder1 > poder2 );

return 0;
    
}
