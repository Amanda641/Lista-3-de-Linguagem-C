/*04. Faça um programa que receba um número n. Receba a nota de n alunos. Ao final do programa imprima a maior e a menor nota.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, n, m, maior, menor ;

    printf("Digite o número de alunos: ");
    scanf("%i", &m);
    maior=m;
    menor=m;
    for (i = 0; i < m; i++ ){
        printf("Digite a %d° nota: ", i + 1);
        scanf("%i", &n);

        if (n > maior){
            maior = n;
        }
        else
            if (n < menor){
            menor = n;
        }
    }
    printf("A maior nota é %d", maior);
    printf("\nA menor nota é %d", menor);

    return 0;
}
