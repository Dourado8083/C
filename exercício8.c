#include <stdio.h>

int main()
{
    float c;
    float f;
    float calc;

    printf("Digite a temperatura em graus fahrenheit: ");
    scanf("%f", &f);
    
    // c = (5 * f - 32) / 9;
    c = (f - 32) / 1.8;
    printf("A conversão para graus celsius é: %.2f", c);
}