#include <stdio.h>

int main(){
     // carta 1 
    char estado1;
    char codigo1[10];
    char nomecidade1[100];
    unsigned long int populacao1;
    float areaemkm²1;
    float PIB1;
    int pontosturisticos1;
    float densidadepopulacional1, PIBpercapita1;
    float resultado_E1, resultado_n1;
    float Superpoder1;
    
    
    //carta 2
    char estado2;
    char codigo2[10];
    char nomecidade2[100];
    unsigned long int populacao2;
    float areaemkm²2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2, PIBpercapita2;;
    float resultado_E2, resultado_n2;
    float Superpoder2;

   
    
    //leitura dos dados da primeira carta
    printf("carta 1:\n");
    printf("estado:\n");
    scanf("%s" , &estado1);
    

    printf("codigo: \n");
    scanf("%s" , &codigo1);

    printf("nomecidade1: \n");
    scanf("%s" , &nomecidade1);

    printf("populacao: \n");
    scanf("%d" , &populacao1);

    printf("area(em km²): \n");
    scanf("%f" , &areaemkm²1);

    printf("PIB: \n");
    scanf("%f" , &PIB1);

    printf("numeros de pontos turisticos: \n");
    scanf("%d" , &pontosturisticos1);
    
    //leitura dos dados da segunda carta
    printf("carta 2:\n");
    printf("estado:\n ");
    scanf("%s" , &estado2);

    printf("codigo: \n");
    scanf("%s" , &codigo2);

    printf("nome da cidade: \n");
    scanf("%s" , &nomecidade2);

    printf("populacao: \n");
    scanf("%d" , &populacao2);

    printf("area (em km²): \n");
    scanf("%f" , &areaemkm²2);

    printf("PIB: \n");
    scanf("%f", &PIB2);
    
    printf("numero de pontos turisticos: \n");
    scanf("%d" , &pontosturisticos2);


    //divisão 1
    resultado_E1 = populacao1 / areaemkm²1;
    resultado_n1 = PIB1 / populacao1;
   
    printf("Densidade populacional 1 é: %f\n", resultado_E1);
    printf("PIB per capita 1 é: %f\n", resultado_n1 );
    
    //divisão 2
    resultado_E2 = populacao2 / areaemkm²2;
    resultado_n2 = PIB2 / populacao2;
    
    printf("Densidade populacional 2 é: %f\n", resultado_E2);
    printf("PIB per capita 2 é: %f\n", resultado_n2);
    

    //soma do super poder 1
    float resultado_s1;
    
    resultado_s1 = populacao1 + areaemkm²1 + PIB1 + pontosturisticos1 + (PIBpercapita1 + densidadepopulacional1);

    //soma do super poder 2
    float resultado_s2;
    
    resultado_s2 = populacao2 + areaemkm²2 + PIB2 + pontosturisticos2 + (PIBpercapita2 + densidadepopulacional2);
    
    printf("super poder 1 é: %f\n", resultado_s2);
    printf("super poder 2 é: %f\n", resultado_s1);
    
    printf("\n---------comparação das cartas----------\n");
    
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

    resultado1 = populacao1 > populacao2;
    resultado2 = areaemkm²1 > areaemkm²2;
    resultado3 = PIB1 > PIB2;
    resultado4 = pontosturisticos1 > pontosturisticos2;
    resultado5 = densidadepopulacional1 > densidadepopulacional2;
    resultado6 = PIBpercapita1 > PIBpercapita2;
    resultado7 = Superpoder1 > Superpoder2;
    
    printf("população: %d\n", resultado1);
    printf("Área: %d\n", resultado2);
    printf("PIB: %d\n", resultado3);
    printf("Pontos turísticos: %d\n", resultado4);
    printf("Densidade populacional: %d\n", resultado5);
    printf("PIB per capita: %d\n", resultado6);
    printf("Super poder: %d\n", resultado7);
    
    //carta vencedora por um atributo
    if (populacao1 > populacao2) {
        printf("carta 1 ganhou!\n");
    } else {
      printf("carta 2 ganhou!\n");
    }    

    return 0;
    
     



}