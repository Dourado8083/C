#include <stdio.h>

int main()
{
   float num;
   float num2;
   float mult;
 printf("Digite o Primeiro Valor: ");
 scanf("%f",&num);
 printf("Digite o Segundo Valor: ");
 scanf("%f",&num2);
 mult = num * num2;
 printf("O Primeiro valor é: %.2f\n",num);
 printf("O Segundo valor é: %.2f\n",num2);
 printf("O produto entre é: %.2f",mult);
}