/*1- Para cada problema a seguir defina uma função recursiva,
faça a simulação por substituição e desenhe o fluxo de chamadas e retornos:
c) Calcular o quociente da divisão inteira usando subtração.*/

#include <stdio.h>
unsigned quociente(int dividendo, int divisor){
    if(dividendo < divisor)
    return 0;
        return 1 + quociente(dividendo-divisor, divisor);
}
int main(){
    int x, y;
    
        printf("Digite um numero para calcular divisao:\nDigite o Dividendo: ");
        scanf("%d", &x);
        printf("Digite o Divisor: ");
        scanf("%d", &y);
            if(y==0)
                printf("Nao existe divisao por 0!");
            else
            printf("O quociente da divisao e: %d", quociente(x, y));
    return 0;
}
