#include <stdio.h>

int main(){

int numeroint;
float numerorealx;
double numerorealy;
char letra,  palavra [20];
 
printf(" Digite um numeiro inteiro: ");
scanf("%d",&numeroint);

printf(" Digite um numero real: ");
scanf("%f",&numerorealx);
fflush (stdin);

printf(" Digite um numero real com de casas: ");
scanf("%lf",&numerorealy);
fflush(stdin);

printf(" Digite uma letra: ");
scanf("%c",&letra);
fflush(stdin);

printf(" Digite uma palavra:");
fgets(palavra,20,stdin);
fflush(stdin);

printf("\n Numeros reais: %d\n", numeroint);
printf(" Os numeros reais sao:\n %.1f\n %.3lf\n", numerorealx,numerorealy);
printf(" Letra: %c\n", letra);
printf(" Palavra: %s\n", palavra);
printf(" Endereco: %x", &numeroint ); 
}