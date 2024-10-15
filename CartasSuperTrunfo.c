
#include <stdio.h>
#include<stdlib.h>

int main (){

char Estado[50]= "Rio De janeiro";
char Carta [100]="A01";
char Cidade[100]="petrópolis";
float Populacao=278.881;
float Area =791.144;
float PIB=15.70;
int Pontos_turisticos=15; 


printf("Olá, bem vindo Super trunfo, Nesse jogo vamos Fazer umas Comparações entre Cartas!:\n");
printf("\n");

printf("Vamos inicar com a primeira carta A01, Digite o Codigo A01 para ver a primeira carta!\n");
scanf("%s",&Carta);

printf("\n");

printf("carta R01\n");

printf("\n");
printf("Estado: Rio de janeiro\n");
printf("Carta: R01\n");
printf("Cidade:Petópolis\n");
printf("população:278.881\n");
printf("Area Km²:791.144\n");
printf("PIB: 15.70\n");
printf("Pontos turisticos:15\n");
printf("\n");
printf("Quantos pontos turisticos aproximadamente tem Petrópolis?\n");

scanf("%d",&Pontos_turisticos);

printf("\n");

printf("Proxima carta R02, para continuar digite o Codigo da Carta:\n");
scanf("%s",&Carta);

printf("\n");

printf("carta R02\n");

printf("Estado: Rio de janeiro\n");
printf("Carta: R02\n");
printf("Cidade:Nova Iguaçu\n");
printf("população:843.046\n");
printf("Area Km²:524.04\n");
printf("PIB: 21.559.06\n");
printf("Pontos turisticos:15\n");

printf("\n");

printf("Qual a população de Nova iguaçu?:\n");

scanf("%f",&Populacao);

printf("\n");
printf("Proxima carta R03, para continuar digite o Codigo da Carta:\n");
scanf("%s",&Carta);
printf("\n");
printf("carta R03\n");

printf("Estado: Rio de janeiro\n");
printf("Carta: R03\n");
printf("Cidade:Angra dos Reis\n");
printf("população:179.120\n");
printf("Area Km²:813.420\n");
printf("PIB: 53.262.55\n");
printf("Pontos turisticos:20\n");

printf("\n");
printf("Qual o PIB de Angra dos Reis?:\n");
printf("\n");
scanf("%f",&PIB);
printf("\n");

printf("Proxima carta R04, para continuar digite o Codigo da Carta:\n");
scanf("%s",&Carta);
printf("\n");
printf("carta R04\n");

printf("Estado: Rio de janeiro\n");
printf("Carta: R04\n");
printf("Cidade:Niteroi\n");
printf("população:516.720\n");
printf("Area Km²:133,757\n");
printf("PIB: 128.333,01\n");
printf("Pontos turisticos:16\n");

printf("\n");

printf("Proxima carta S01, para continuar digite o Codigo da Carta:\n");
scanf("%s",&Carta);
printf("\n");

printf("carta S01\n");
printf("Estado: São Paulo\n");
printf("Carta: S01\n");
printf("Cidade:Santos\n");
printf("população:429.567\n");
printf("Area Km²:281,033\n");
printf("PIB: 55.508,46\n");
printf("Pontos turisticos:20\n");

printf("\n");

printf("qual é a população de Santos?")
scanf("%f",&Populacao);
printf("\n")

printf("carta S02\n");
printf("Estado: São Paulo\n");
printf("Carta: S02\n");
printf("Cidade:Guaruja\n");
printf("população:294.973\n");
printf("Area Km²:144,794\n");
printf("PIB:32.292,29\n");
printf("Pontos turisticos:15\n");

printf("Quantos pontos turisticos tem Guaruja?:\n");
scanf("%d",&Pontos_turisticos);

printf("\n");

printf("carta S03\n");

printf("Estado: São paulo\n");
printf("Carta: S03\n");
printf("Cidade:Cubatão\n");
printf("população:115.082\n");
printf("Area Km²:142,879\n");
printf("PIB:165.607,50\n");
printf("Pontos turisticos:4\n");

printf("\n");

printf("Proxima carta, Qual a população de Cubatão?:\n");
scanf("%f",&Populacao);

printf("\n");

printf("carta R02\n");

printf("Estado: São Paulo\n");
printf("Carta: S04\n");
printf("Cidade:barueri\n");
printf("população:330.339\n");
printf("Area Km²:43,52\n");
printf("PIB:207.460,98\n");
printf("Pontos turisticos:2\n");

printf("\n");
printf("Qual a area km² de Barueri?:\n");
printf("\n");
scanf("%f",&PIB);
printf("\n");

return 0;

}
