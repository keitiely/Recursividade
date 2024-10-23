/*1- Para cada problema a seguir defina uma função recursiva,
faça a simulação por substituição e desenhe o fluxo de chamadas e retornos:
d) Calcular a soma de dois naturais usando as funções
suc(n) e pred(n) que devolvem, respectivamente, o sucessor e o predecessor de um natural n.
*/
#include <stdio.h>

unsigned suc(int num1){
            return num1+1;
}
unsigned pred(int num1){
            return num1-1;
}
int main(){
    int x, soma=0;
    
        printf("Digite um numero para calcular soma do sucessor e antecessor dele: ");
        scanf("%d", &x);
        soma= suc(x) + pred(x);
        printf("A soma e: %d", soma);
    return 0;
}
