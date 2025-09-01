#include <stdio.h>

int main(){
     // carta 1 
    char estado1;
    char codigo1[10];
    char nomecidade1[100];
    int populacao1;
    float areaemkm²1;
    float PIB1;
    int pontosturisticos1;
    float densidadepopulacional1, PIBpercapita1;
    float resultado1;
    float resultado_n1;

    
    
    //carta 2
    char estado2;
    char codigo2[10];
    char nomecidade2[100];
    int populacao2;
    float areaemkm²2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2, PIBpercapita2;;
    float resultado2;
    float resultado_n2;

   
    
    //leitura dos dados da primeira carta
    printf("carta 1:\n");
    printf("estado:");
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
    printf("estado: ");
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
    resultado1 = populacao1 / areaemkm²1;
    resultado_n1 = PIB1 / populacao1;
   
    printf("Densidade populacional 1 é: %f\n", resultado1);
    printf("PIB per capita 1 é: %f\n", resultado_n1 );
    
    //divisão 2
    resultado2 = populacao2 / areaemkm²2;
    resultado_n2 = PIB2 / populacao2;
    
    printf("Densidade populacional 2 é: %f\n", resultado2);
    printf("PIB per capita 2 é: %f\n", resultado_n2);
    
    
    return 0;
    
     



}