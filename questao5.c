/*05. Faça um programa que receba um número n e some os números pares de 0 até o número digitado.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    printf("Digite um número: ");
    scanf("%d", &n);
    i = 0;
    if (n % 2 == 0){
        printf("%i ", i);
        while(i < n){
            i +=2;
            printf("%i ", i);
        }
    }
    if (n % 2 != 0){
        printf("%i ", i);
        while(i < n){
            i +=2;
            printf("%i ", i);
        }
    }

    return 0;
}
