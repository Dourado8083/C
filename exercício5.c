#include <stdio.h>

int main()
{
   int idade1;
   int idade2;
   int idade3;
   float soma;

   printf("Digite a Primeira idade:");
   scanf("%i", &idade1);

   printf("Digite a Segunda idade:");
   scanf("%i", &idade2);

   printf("Digite a Terceiro idade:");
   scanf("%i", &idade3);

   soma = (idade1 + idade2 + idade3) / 3;
   printf("A media de idade é %g", soma);
}
