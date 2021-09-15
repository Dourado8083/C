#include <stdio.h>

int main()
{
    float num;
    float num2;
    int troca;
    
    printf("Digite o primeiro valor: ");
    scanf("%f",&num);
    printf("Digite o segundo valor: ");
    scanf("%f",&num2);
    troca = num;
    num = num2;
    num2 = troca;
    printf("O valor 1 é : %.2f\n",num);
    printf("O valor 2 é : %.2f",num2);
}
