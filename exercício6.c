Exercicio 06 

#include <stdio.h>

int main()
{
float num;
float num2;
float som;
float sub;
float mul;
float divi;

printf ("Digite o Primeiro Número: ");
scanf("%f",&num);

printf ("Digite o Segundo Número: ");
scanf("%f",&num2);

som = num + num2;
sub = num - num2;
mul = num * num2;
divi = num / num2;

printf ("A soma é: %g\n",som);
printf ("A subtração é: %g\n",sub);
printf ("A multiplicação é: %g\n",mul);
printf ("A divisão é: %.2f\n",divi);
}
