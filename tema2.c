#include <stdio.h>

int main() {
    

    char estado_1[6], estado_2[5];
    char codigo_1[20], cidade_1[20], codigo_2[20], cidade_2[20];
    char Soma;
    int populacao_1 , pontos_turisticos_1, populacao_2, pontos_turisticos_2;
    float area_1, PIB_1, area_2, PIB_2;
    float densidade_populacional1, densidade_populacional2, pibpercapita1, pibpercapita2;
    float calculo1, calculo2;




    // Dados Carta 1 // 
    printf ("**** CARTA 1 ****: \n");

    printf ("Digite o Codigo: \n");
    scanf (" %s", &codigo_1);
    printf ("Digite o Estado: \n");
    scanf (" %s", &estado_1);
    printf ("Digite a Cidade: \n");
    scanf (" %s", &cidade_1);
    printf ("Digite a Populacao: \n");
    scanf (" %d", &populacao_1);
    printf ("Digite a Area: \n");
    scanf (" %f", &area_1);
    printf ("Digite o PIB: \n");
    scanf (" %f", &PIB_1);
    printf ("Digite o numero de Pontos Turisticos: \n");
    scanf (" %d", &pontos_turisticos_1);
    printf (" \n");



    // Dados Carta 2 // 
    printf ("****CARTA 2****: \n");
    printf ("Digite o codigo: \n");
    scanf (" %s", &codigo_2);
    printf ("Digite o estado: \n");
    scanf (" %s", &estado_2);
    printf ("Digite a cidade: \n");
    scanf (" %s", &cidade_2);
    printf ("Digite a população: \n");
    scanf (" %d", &populacao_2);
    printf ("Digite a area: \n");
    scanf (" %f", &area_2);
    printf ("Digite o PIB: \n");
    scanf (" %f", &PIB_2);
    printf ("Digite o numero de pontos turisticos: \n");
    scanf (" %d", &pontos_turisticos_2);
    printf (" \n");



    if (populacao_1 > populacao_2){
        printf ("Carta 1 venceu nesse atributo! \n");
    } else if (populacao_1 > populacao_2) {
        printf ("Carta 2 venceu nesse atributo! \n");
    } else if {
        printf ("Houve um empate nesse atributo! \n");
        } 

        printf ("\n");

    if (area_1 > area_2){
        printf ("Carta 1 venceu nesse atributo! \n");
    } else if (area_1 > area_2) {
        printf ("Carta 2 venceu nesse atributo! \n");
    } else if { ()
        printf ("Houve um empate nesse atributo! \n");
    }

      printf ("\n");


    //Compareção dos Atributos://
    printf ("Comparação dos atributos: ");
    if (populacao_1 > populacao_2) {
        printf ("Carta 1 (%s) venceu: %d", cidade_1 , populacao_1);
    } else if{ ()
        printf ("Carta 2 (%s) venceu: %d", cidade_1, populacao_2);
    }


    //Decisão CIDADE VENCEDORA **

    printf ("A Cidade vencedora é: %s \n", cidade_1);

    return 0;
}