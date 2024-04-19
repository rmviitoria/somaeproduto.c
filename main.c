/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    printf("Digite o quarto número: ");
    scanf("%d", &d);
    printf("Digite o quinto número: ");
    scanf("%d", &e);
    
    int soma = a + b + c + d + e;
    printf("Soma dos valores é: %d \n", soma);
    
    int produto = a * b * c * d * e;
    printf("O produto dos valores é: %d", produto);
    
    return 0;
    
}