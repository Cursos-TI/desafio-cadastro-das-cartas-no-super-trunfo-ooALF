#include <stdio.h>


int main (){


char cidade[20], cidade2[20];
char estado[20], estado2[20];
char codigo[20],codigo2[20];
float populacao, populacao2;  
int turistico, turistico2;
float area,area2;
float pib, pib2;
float divisao, divisao2;
float areadiv, areadiv2;


//carta 1 do jogo
printf ("Primeira letra do Estado:\n");
scanf ("%s",&estado);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo);
printf ("Nome da Cidade:\n");
scanf ("%s",&cidade);
printf ("População da Cidade:\n");
scanf ("%f",&populacao);
printf ("Pontos Turisticos:\n");
scanf ("%d",&turistico);
printf ("Área em km²:\n");
scanf ("%f",&area);
printf ("Pib:\n");
scanf ("%f",&pib);



//carta 2 do jogo

printf ("Primeira letra do Estado:\n");
scanf ("%s",&estado2);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo2);
printf ("Nome da Cidade:\n");
scanf ("%s",&cidade2);
printf ("População da Cidade:\n");
scanf ("%f",&populacao2);
printf ("Pontos Turisticos:\n");
scanf ("%d",&turistico2);
printf ("Área em km²:\n");
scanf ("%f",&area2);
printf ("Pib:\n");
scanf ("%f",&pib2);
printf ("\n");

divisao = (pib + area) / 2;
divisao2 = (pib2 + area2) / 2;


//exibição carta 1
printf ("Carta 1:\n");
printf ("Estado: %s\n" ,estado);
printf ("Codigo: %s\n" ,codigo);
printf ("Cidade: %s\n" ,cidade);
printf ("População: %f Habitantes\n",populacao);
printf ("Area: %.2f km²\n",area);
printf ("Pib: %.2f\n bilhões\n",pib);
printf ("Pontos Turisticos: %d\n",turistico);
printf ("PIB per Capita %.3f reais\n",divisao);
printf ("Densidade populacional %.2f hab/km²\n",areadiv);
printf ("\n");
areadiv = ( populacao + area) / 2;
areadiv2 = ( populacao2 + area2) / 2;

//exibição carta 2
printf ("Carta 2:\n");
printf ("Estado:%s\n" ,estado2);
printf ("Codigo:%s\n" ,codigo2);
printf ("Cidade:%s\n" ,cidade2);
printf ("População:%f Habitantes\n",populacao2);
printf ("Area:%.2f km²\n",area2);
printf ("Pib:%.2f Bilhões\n",pib2);
printf ("Pontos Turisticos:%d\n",turistico2);
printf ("PIB per Capita %.2f reais \n",divisao2);
printf ("Densidade populacional %.2f hab/km²\n",areadiv2);

return 0;
}