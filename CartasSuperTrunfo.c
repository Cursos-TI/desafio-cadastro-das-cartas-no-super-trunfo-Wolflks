
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

printf("Vamos inicar com a primeira carta A01, Digite A01 para ver a primeira carta!\n");
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
printf("Quantos pontos turisticos aproximadamente tem Petrópolis?");

scanf("%s",&Pontos_turisticos);

printf("\n");

printf("carta R02\n");

printf("Estado: Rio de janeiro\n");
printf("Carta: R02\n");
printf("Cidade:Nova Iguaçu\n");
printf("população:843.046\n");
printf("Area Km²:524.04\n");
printf("PIB: 21.559.06\n");
printf("Pontos turisticos:15\n");

printf("Vamos para Proxima carta, Qual a população de Nova iguaçu?");

scanf("%s",&Populacao);

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

printf("carta R04\n");

printf("Estado: Rio de janeiro\n");
printf("Carta: R04\n");
printf("Cidade:Niteroi\n");
printf("população:516.720\n");
printf("Area Km²:133,757\n");
printf("PIB: 128.333,01\n");
printf("Pontos turisticos:16\n");

printf("\n");

printf("carta P01\n");

printf("Estado: Lisboa\n");
printf("Carta: P01\n");
printf("Cidade:Setúbal\n");
printf("população:123,519\n");
printf("Area Km²:230,33\n");
printf("PIB: 128.333,01\n");
printf("Pontos turisticos:3\n");




scanf("%c", &Carta);
   
   return 0;
}
