#include <stdio.h>
 int main() {
    char nome[100];
    char sexo[1];
    int idade;
    float salario;
printf("Qual seu nome?:   ");
scanf("%s", &nome);

printf("\nQual seu sexo?:   ");
scanf("%s", & sexo);

printf("\nQual a sua idade:  ");
scanf("%d", & idade);

printf("\nQual seu salario?:");
scanf("%f", & salario);
   
 return 0;  
}