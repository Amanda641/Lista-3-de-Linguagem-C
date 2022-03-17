/*02. Faça um programa que receba um número inteiro por vez e imprima seu quadrado até que o usuário digite o valor zero.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, n, quad;
    
    while( n != 0){
        printf("Digite o valor de n: ");
        scanf("%d", &n);
        quad = pow(n,2);
        printf("%d\n", quad);
    }    
    return 0;
}
