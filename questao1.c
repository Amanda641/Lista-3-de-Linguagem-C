/*01. FaÃ§a um programa que receba um nÃºmero n e imprima os n primeiros inteiros positivos.*/

#include <stdio.h>

int main()
{
    
    int i, n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for( i = 0; i <= n; i++){
        
        printf("%d ", i);
    }
    return 0;
}
