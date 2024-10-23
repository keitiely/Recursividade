/*1- Para cada problema a seguir defina uma função recursiva,
faça a simulação por substituição e desenhe o fluxo de chamadas e retornos:
b) Calcular o resto da divisão inteira usando subtração.*/

#include <stdio.h>

unsigned resto(int dividendo, int divisor){
    if(dividendo < divisor)
    return dividendo;
        return resto(dividendo-divisor, divisor);
}
int main(){
    int x, y;
    
        printf("Digite um numero para calcular o resto:\nDigite o Dividendo: ");
        scanf("%d", &x);
        printf("Digite o Divisor: ");
        scanf("%d", &y);
        printf("O resto da divisao e: %d", resto(x, y));
    return 0;
}
