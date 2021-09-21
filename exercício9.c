#include <stdio.h>

int main()
{
int a;
int b;
int c;

printf("Digite o 1° Valor: ");
scanf("%i",&a);
printf("Digite o 2° Valor: ");
scanf("%i",&b);
printf("Digite o 3° Valor:");
scanf("%i",&c);

if(a < b & a < c){
    printf("\nO menor número é: %d",a);
    return 0;
}
if(b < c & b < a){
    printf("\nO menor número é: %d",b);  
    return 0;
}
if(c < a & c < b){
    printf("\nO menor número é: %d",c);
    return 0;
}else{
    printf("\nErro n Programa");
}
}