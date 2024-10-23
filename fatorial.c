/*1- Para cada problema a seguir defina uma função recursiva, faça a simulação
por substituição e desenhe o fluxo de chamadas e retornos:
a) Calcular o fatorial de um número natural.*/

#include <stdio.h>

unsigned fatorial(int num){
    if(num==1)
    return 1;
        return num * fatorial(num-1);
}
int main(){
    int x;
        printf("Digite um numero para calcular Fatorial: ");
        scanf("%d", &x);
        
        printf("O fatorial e: %d", fatorial(x));
    return 0;
}
