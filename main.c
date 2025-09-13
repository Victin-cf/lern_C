#include <stdio.h>
#include <string.h>

int main()
{
    //base das informacoes
    char Estado1, Estado2, Codigo_da_Carta1[03], Codigo_da_Carta2[03], Cidade1[20], Cidade2[20];
   
    int Populacao1, Populacao2,  Pontos_Turisticos1, Pontos_Turisticos2;
  
    float Area1, Area2, PIB1, PIB2;

    printf("Início ao jogo Super Trunfo!\n\n"); //Início ao jogo

    printf("Selecinos as informações da Carta 1: \n");

    //Seleção do Estado1
    printf("Defina seu Estado(A à H): ");
    scanf("%c", &Estado1);
    printf("\n");

    //Seleção da carta1
    printf("Defina o Código de sua carta(seguindo o estado e número de 01 à 04): ");
    scanf("%s", &Codigo_da_Carta1);
    printf("\n");

    //Seleção da Cidade1
    printf("Defina o nome de sua cidade:");
    scanf("%s", &Cidade1);
    printf("\n");

    //Seleção da população1
    printf("Qual o tamanho da População: ");
    scanf("%d", &Populacao1);
    printf("\n");

    //Seleção da Área1
    printf("Qual o Tamanho da Área em Km²: ");
    scanf("%f", &Area1);
    printf("\n");

    //Seleção do PIB1
    printf("Informe o PIB em reais: ");
    scanf("%f", &PIB1);
    printf("\n");

    //Seleção dos pontos turísticos1
    printf("Qual a quantida de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos1);
    printf("\n");

    //Seleção da Carta 1 Finalizada
    printf("Seleção da Carta 1 Finalizada! \n\n");

    printf("Selecione as informações da Carta 2: \n\n");

    //Seleção do Estado2
    printf("Defina seu Estado(A à H): ");       
    scanf(" %c", &Estado2);
    printf("\n");

    //Seleção da carta2
    printf("Defina o Código de sua carta(seguindo o estado e número de 01 à 04): ");
    scanf("%3s", &Codigo_da_Carta2);
    printf("\n");

    //Seleção da Cidade2
    printf("Defina o nome de sua cidade:");
    scanf("%20s", &Cidade2);
    printf("\n");

    //Seleção da população2
    printf("Qual o tamanho da População: ");
    scanf("%d", &Populacao2);
    printf("\n");

    //Seleção da Área2
    printf("Qual o Tamanho da Área em Km²: ");
    scanf("%f", &Area2);
    printf("\n");

    //Seleção do PIB2
    printf("Informe o PIB em reais: ");
    scanf("%f", &PIB2);
    printf("\n");

    //Seleção dos pontos turísticos2
    printf("Qual a quantida de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);
    printf("\n\n");
    
    //Seleções carta1 e carta2 finalizadas
    printf("Seleção da Carta 2 Finalizada! \n\n");

    //Resultados
    printf("Resultados do cadastramento de cartas!");
    printf("\n\n");

    //Resultados carta 1
    printf("Foram selecinadas as seguintes informações sobre a CARTA 1: "); 
    printf("\n\n");

    //Estado1
    printf("Estado: %c", Estado1);
    printf("\n\n");
    
    //Codigo da Carta
    printf("Código da Carta: %s", Codigo_da_Carta1);
    printf("\n\n");
    
    //Cidade
    printf("Cidade: %s", Cidade1 ); 
    printf("\n\n");

    //População
    printf("População: %.2d", Populacao1);
    printf("\n\n");

    //Area
    printf("Área em Km²: %.2f Km²", Area1);
    printf("\n\n");

    //PIB
    printf("PIB: R$%.2f", PIB1);
    printf("\n\n");

    //Pontos turísticos
    printf("Pontos turísticos: %d", Pontos_Turisticos1);
    printf("\n\n\n");

    //Resultados Carta2
    printf("Foram selecinadas as seguintes informações sobre a CARTA 2: ");
    printf("\n\n");

    //Estado
    printf("Estado: %c", Estado2);
    printf("\n\n");
    
    //Codigo da Carta
    printf("Código da Carta: %3s", Codigo_da_Carta2);
    printf("\n\n");
    
    //Cidade
    printf("Cidade: %s", Cidade2); 
    printf("\n\n");

    //População
    printf("População: %.2d", Populacao2);
    printf("\n\n");

    //Area
    printf("Área em Km²: %.2f Km²", Area2);
    printf("\n\n");

    //PIB
    printf("PIB: R$%.2f", PIB2);
    printf("\n\n");

    //Pontos turísticos
    printf("Pontos turísticos: %d", Pontos_Turisticos2);
    printf("\n");
    
    printf("\n\n");
    return 0;
}