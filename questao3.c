/*03.Faça um programa que receba um número n e imprima os n primeiros números impares.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    printf("Digite um numero: ");
    scanf("%d", &n);
    i = 1;
    if (n % 2 == 0){
        while(i < n){
            i +=2;
            printf("%i ", i - 2);    
        }
    }
    if (n % 2 != 0){
        while(i < n){
            i +=2;
            printf("%i ", i - 2);    
        }printf("%d", n);
    } 
    return 0;
}
